import java.io.FileWriter;
import java.util.ArrayList;

public class ASTConverter {
    private final AssemblyWriter writer;
    private final ArrayList<FuncHeadNode> functions;
    private final ArrayList<Register> functionReturnRegisters;
    private final AbstractSymbolTree AST;
    private final TableStack lookupTable;

    private int registerNumber;
    private String currentBlock;
    private String currentFunction;

    private ArrayList<ArrayList<String>> functionParamLookup;

    public ASTConverter(FileWriter f, AbstractSymbolTree tree, ArrayList<FuncHeadNode> f2, TableStack lt) {
        writer = new AssemblyWriter(f);
        functions = f2;
        AST = tree;
        lookupTable = lt;
        currentBlock = "";

        functionParamLookup = new ArrayList<>();
        functionReturnRegisters = new ArrayList<>();
    }

    public void convertAST() {
        // Declare Variables
        lookupTable.generateAssemblyDeclarations(writer);

        // Visit body of program
        visitStmtNode(AST.head.body);

        // Create exit
        writer.createHalt();

        // Generate function jumps
        for(int i = 0; i < functions.size(); i++) {
            FuncHeadNode current = functions.get(i);
            visitFuncHeadNode(current);
        }
    }

    void visitFuncHeadNode(FuncHeadNode ctx) {
        // Create jump for function
        writer.createLabel(ctx.HeaderName);

        // Create parameter lookup table
        visitFuncParameters(ctx.parameters);

        // Create return register;
        Register r = new Register();
        r.ID = "r" + registerNumber;
        r.type = ctx.type;
        functionReturnRegisters.add(r);
        registerNumber++;

        // Process Body and create all calls
        currentFunction = ctx.HeaderName;
        visitStmtNode(ctx.body);

        // Create return statement
        writer.createRet();
    }

    void visitFuncParameters(FuncParamNode ctx) {
        ArrayList<String> parameters = new ArrayList<>();

        while(ctx != null) {
            if(ctx.declarationContent != null) {
                parameters.add(ctx.declarationContent.ID.get(0));
            }
            ctx = ctx.nextDeclaration;
        }

        functionParamLookup.add(parameters);
    }

    void visitStmtNode(ASTNode ctx) {
        // Check type of statement node
        if(ctx instanceof WriteStmtNode) {
            // Process write statement
            visitWriteStmtNode((WriteStmtNode) ctx);

        } else if(ctx instanceof ReadStmtNode) {
            // Process read statement
            visitReadStmtNode((ReadStmtNode) ctx);

        } else if(ctx instanceof IfStmtNode) {
            // Process if statement
            String previousBlock = currentBlock;
            currentBlock = ((IfStmtNode) ctx).blockName;
            visitIfStmtNode((IfStmtNode) ctx);
            currentBlock = previousBlock;

        } else if(ctx instanceof WhileStmtNode) {
            // Process while statement
            String previousBlock = currentBlock;
            currentBlock = ((WhileStmtNode) ctx).blockName;
            visitWhileStmtNode((WhileStmtNode) ctx);
            currentBlock = previousBlock;

        }  else if(ctx instanceof AssignStmtNode) {
            // Process assign statement
            visitAssignStmtNode((AssignStmtNode) ctx);

        } else if(ctx instanceof ReturnStmtNode) {
            // Process return statement
            visitReturnStmtNode((ReturnStmtNode) ctx);

        }  else if(ctx instanceof FunctionCallNode) {
            // Process function call statement
            visitFunctionCallNode((FunctionCallNode) ctx, "Skip");
        }
    }

    void visitWriteStmtNode(WriteStmtNode ctx) {
        for(int i = 0; i < ctx.idList.size(); i++) {
            String name = lookupTable.getCompilerName(ctx.idList.get(i), currentBlock);
            String type = lookupTable.getVariableType(ctx.idList.get(i), currentBlock);
            if(type.equals("STRING")) {
                writer.createWrites(name);
            } else if(type.equals("INT")) {
                writer.createWritei(name);
            } else {
                writer.createWriter(name);
            }

        }

        // Visit Next Statement
        if(ctx.next != null) {
            visitStmtNode(ctx.next);
        }
    }

    void visitReadStmtNode(ReadStmtNode ctx) {
        for(int i = 0; i < ctx.idList.size(); i++) {
            String name = lookupTable.getCompilerName(ctx.idList.get(i), currentBlock);
            String type = lookupTable.getVariableType(ctx.idList.get(i), currentBlock);
            if(type.equals("INT")) {
                writer.createReadi(name);
            } else {
                writer.createReadr(name);
            }
        }


        // Visit Next Statement
        if(ctx.next != null) {
            visitStmtNode(ctx.next);
        }
    }

    Register visitFunctionCallNode(FunctionCallNode ctx) {
        currentFunction = ctx.ID;
        currentBlock = ctx.ID;

        // Move function parameter info into parameter variables
        for(int i = 0; i < functions.size(); i++) {
            if(currentFunction.equals(functions.get(i).HeaderName)) {
                for(int j = 0; j < functionParamLookup.get(i).size(); j++) {
                    writer.createMove(visitExpr(ctx.arguments.get(j)).ID, lookupTable.getCompilerName(functionParamLookup.get(i).get(j), currentFunction));
                }
            }
        }

        // Create jump to function
        writer.createJSR(ctx.ID);

        // Get register that return value will come back on
        Register returnReg = new Register();
        for(int i = 0; i < functions.size(); i++) {
            if(currentFunction.equals(functions.get(i).HeaderName)) {
                returnReg = functionReturnRegisters.get(i);
            }
        }

        // Move value from return register into new register
        Register finalReg = new Register();
        finalReg.ID = "r" + registerNumber;
        finalReg.type = returnReg.type;
        registerNumber++;
        writer.createMove(returnReg.ID, finalReg.ID);

        // Return new register
        return finalReg;
    }

    void visitFunctionCallNode(FunctionCallNode ctx, String skip) {
        currentFunction = ctx.ID;
        currentBlock = ctx.ID;
        writer.createJSR(ctx.ID);
    }

    void visitIfStmtNode(IfStmtNode ctx) {
        // Process condition
        visitConditionNode(ctx.condition, "if" + ctx.blockName);

        // Create else if it exists
        if(ctx.elseBody != null) {
            String previousBlock = currentBlock;
            currentBlock = ctx.elseBody.blockName;
            visitElsePart(ctx.elseBody);
            currentBlock = previousBlock;
        }
        // Unconditional jump to leave at the end of else or condition not met
        writer.createJmp("ifLeave" + ctx.blockName);

        // Create condition jump (if[blockName])
        writer.createLabel("if" + ctx.blockName);

        // Create if body
        visitStmtNode(ctx.ifBody);

        // Create if leave (ifLeave[blockName])
        writer.createLabel("ifLeave" + ctx.blockName);

        // Visit Next Statement
        if(ctx.next != null) {
            visitStmtNode(ctx.next);
        }
    }

    void visitWhileStmtNode(WhileStmtNode ctx) {
        // Create while compare (whileComp[blockName])
        writer.createLabel("whileComp" + ctx.blockName);

        // Process condition
        visitConditionNode(ctx.condition, "while" + ctx.blockName);

        // Unconditional jump to leave if condition is not met
        writer.createJmp("whileLeave" + ctx.blockName);

        // Create while body
        writer.createLabel("while" + ctx.blockName);
        visitStmtNode(ctx.body);

        // Unconditional jump to comparison to check while status
        writer.createJmp("whileComp" + ctx.blockName);

        // Create while leave (whileLeave[blockName])
        writer.createLabel("whileLeave" + ctx.blockName);

        // Visit Next Statement
        if(ctx.next != null) {
            visitStmtNode(ctx.next);
        }
    }

    void visitAssignStmtNode(AssignStmtNode ctx) {
        writer.createMove(visitExpr(ctx.expression).ID, lookupTable.getCompilerName(ctx.ID, currentBlock));

        // Visit Next Statement
        if(ctx.next != null) {
            visitStmtNode(ctx.next);
        }
    }

    void visitReturnStmtNode(ReturnStmtNode ctx) {
        // Get return value
        Register returnValue = visitExpr(ctx.expression);

        // Put return value into return register
        for(int i = 0; i < functions.size(); i++) {
            if(currentFunction.equals(functions.get(i).HeaderName)) {
                writer.createMove(returnValue.ID, functionReturnRegisters.get(i).ID);
            }
        }

        // Return to spot in function
        writer.createRet();

        // Visit Next Statement
        if(ctx.next != null) {
            visitStmtNode(ctx.next);
        }
    }

    void visitElsePart(ElseNode ctx) {
        if(ctx.body != null) {
            visitStmtNode(ctx.body);
        }
    }

    void visitConditionNode(ConditionNode ctx, String conditionMet) {
        if(visitExpr(ctx.op1).type.equals("INT")) {
            writer.createCmpi(visitExpr(ctx.op1).ID, visitExpr(ctx.op2).ID);
        } else {
            writer.createCmpr(visitExpr(ctx.op1).ID, visitExpr(ctx.op2).ID);
        }

        if(ctx.operator.equals(">")) {
            writer.createJgt(conditionMet);
        } else if(ctx.operator.equals(">=")) {
            writer.createJge(conditionMet);
        } else if(ctx.operator.equals("<")) {
            writer.createJlt(conditionMet);
        } else if(ctx.operator.equals("<=")) {
            writer.createJle(conditionMet);
        } else if(ctx.operator.equals("=")) {
            writer.createJeq(conditionMet);
        } else if(ctx.operator.equals("!=")) {
            writer.createJne(conditionMet);
        }
    }

    Register visitExpr(ExprNode ctx) {
        Register finalReg = new Register();

        if(ctx instanceof AddNode) {
            finalReg = visitAddNode((AddNode) ctx);
        } else if(ctx instanceof MultNode) {
            finalReg = visitMultNode((MultNode) ctx);
        } else if(ctx instanceof VarNode) {
            finalReg = visitVarNode((VarNode) ctx);
        } else if(ctx instanceof IntNode) {
            finalReg = visitIntNode((IntNode) ctx);
        } else if(ctx instanceof FloatNode) {
            finalReg = visitFloatNode((FloatNode) ctx);
        } else if(ctx instanceof FunctionCallNode) {
            finalReg = visitFunctionCallNode((FunctionCallNode) ctx);
        }

        return finalReg;
    }

    Register visitAddNode(AddNode ctx) {
        Register leftOp = visitExpr(ctx.leftPart);
        Register rightOp = visitExpr(ctx.rightPart);

        Register reg1 = new Register();
        reg1.ID = "r" + registerNumber;
        reg1.type = leftOp.type;
        registerNumber++;
        writer.createMove(leftOp.ID, reg1.ID);

        Register reg2 = new Register();
        reg2.ID = "r" + registerNumber;
        reg2.type = rightOp.type;
        registerNumber++;
        writer.createMove(rightOp.ID, reg2.ID);

        if(ctx.operator.equals("+")) {
            if(reg1.type.equals("INT")) {
                writer.createAddi(reg1.ID, reg2.ID);
            } else {
                writer.createAddr(reg1.ID, reg2.ID);
            }
        } else {
            if(reg1.type.equals("INT")) {
                writer.createSubi(reg1.ID, reg2.ID);
            } else {
                writer.createSubr(reg1.ID, reg2.ID);
            }
        }

        Register finalReg = reg1;

        return finalReg;
    }

    Register visitMultNode(MultNode ctx) {
        Register leftOp = visitExpr(ctx.leftPart);
        Register rightOp = visitExpr(ctx.rightPart);

        Register reg1 = new Register();
        reg1.ID = "r" + registerNumber;
        reg1.type = leftOp.type;
        registerNumber++;
        writer.createMove(leftOp.ID, reg1.ID);

        Register reg2 = new Register();
        reg2.ID = "r" + registerNumber;
        reg2.type = rightOp.type;
        registerNumber++;
        writer.createMove(rightOp.ID, reg2.ID);

        if(ctx.operator.equals("*")) {
            if(reg1.type.equals("INT")) {
                writer.createMuli(reg1.ID, reg2.ID);
            } else {
                writer.createMulr(reg1.ID, reg2.ID);
            }
        } else {
            if(reg1.type.equals("INT")) {
                writer.createDivi(reg1.ID, reg2.ID);
            } else {
                writer.createDivr(reg1.ID, reg2.ID);
            }
        }

        Register finalReg = reg1;

        return finalReg;
    }

    Register visitVarNode(VarNode ctx) {
        Register finalReg = new Register();
        finalReg.ID = lookupTable.getCompilerName(ctx.ID, currentBlock);
        finalReg.type = lookupTable.getVariableType(ctx.ID, currentBlock);
        return finalReg;
    }

    Register visitIntNode(IntNode ctx) {
        Register finalReg = new Register();
        finalReg.ID = ctx.value;
        finalReg.type = "INT";
        return finalReg;
    }

    Register visitFloatNode(FloatNode ctx) {
        Register finalReg = new Register();
        finalReg.ID = ctx.value;
        finalReg.type = "FLOAT";
        return finalReg;
    }
}
