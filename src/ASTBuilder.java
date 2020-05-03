import jdk.nashorn.internal.ir.Block;
import org.antlr.v4.runtime.tree.ParseTree;

import java.util.ArrayList;

public class ASTBuilder extends LITTLEBaseVisitor {

    ArrayList<FuncHeadNode> functions;
    int blockNumber;

    public ASTBuilder() {
        functions = new ArrayList<>();
        blockNumber = 0;
    }

    public ArrayList<FuncHeadNode> getFunctions() {
        return functions;
    }

    @Override
    public HeadNode visitProgram(LITTLEParser.ProgramContext ctx) {

        HeadNode header = visitPgm_body(ctx.pgm_body());

        return header;
    }

    @Override
    public HeadNode visitPgm_body(LITTLEParser.Pgm_bodyContext ctx) {
        HeadNode head = new HeadNode();

        head.varDeclarations = visitDecl(ctx.decl());
        functions = visitFunc_declarations(ctx.func_declarations());

        // Insert main code here
        FunctionCallNode main = new FunctionCallNode();
        main.ID = "main";
        head.body = main;

        return head;
    }

    @Override
    public DeclNode visitDecl(LITTLEParser.DeclContext ctx) {
        DeclNode decl = new DeclNode();

        if(ctx.string_decl() != null) {
            decl.declarationContent = visitString_decl(ctx.string_decl());
        } else if(ctx.var_decl() != null) {
            decl.declarationContent = visitVar_decl(ctx.var_decl());
        }

        if(ctx.decl() != null) {
            decl.nextDeclaration = visitDecl(ctx.decl());
        }

        return decl;
    }

    @Override
    public DeclContentNode visitString_decl(LITTLEParser.String_declContext ctx) {
        DeclContentNode temp = new DeclContentNode();

        temp.type = "STRING";
        temp.ID = new ArrayList<>();
        temp.ID.add(ctx.id().getChild(0).toString());
        temp.content = ctx.str().getChild(0).toString();

        return temp;
    }

    @Override
    public DeclContentNode visitVar_decl(LITTLEParser.Var_declContext ctx) {
        DeclContentNode temp = new DeclContentNode();

        temp.type = ctx.var_type().getChild(0).toString();
        ParseTree id_list = ctx.getChild(1);

        temp.ID = new ArrayList<>();
        temp.ID.add(id_list.getChild(0).getChild(0).toString());
        ParseTree id_tail = id_list.getChild(1);

        while(id_tail.getChild(1) != null) {
            temp.ID.add(id_tail.getChild(1).getChild(0).toString());
            id_tail = id_tail.getChild(2);
        }

        return temp;
    }

    @Override
    public ArrayList<FuncHeadNode> visitFunc_declarations(LITTLEParser.Func_declarationsContext ctx) {
        ArrayList<FuncHeadNode> temp = new ArrayList<>();

        FuncHeadNode func;
        func = visitFunc_decl(ctx.func_decl());
        temp.add(func);

        ArrayList<FuncHeadNode> toAdd = new ArrayList<>();
        if(ctx.func_declarations().getChild(0) != null) {
            toAdd = visitFunc_declarations(ctx.func_declarations());
        }

        for(int i = 0; i < toAdd.size(); i++) {
            temp.add(toAdd.get(i));
        }

        return temp;
    }

    @Override
    public FuncHeadNode visitFunc_decl(LITTLEParser.Func_declContext ctx) {
        FuncHeadNode temp = new FuncHeadNode();

        temp.HeaderName = ctx.id().getChild(0).toString();
        if(ctx.any_type().var_type() != null) {
            temp.type = ctx.any_type().var_type().getChild(0).toString();
        } else {
            temp.type = "VOID";
        }

        if(ctx.param_decl_list().getChild(0) != null) {
            temp.parameters = visitParam_decl_list(ctx.param_decl_list());
        }
        temp.varDeclarations = visitDecl(ctx.func_body().decl());
        temp.body = visitStmt_list(ctx.func_body().stmt_list());

        return temp;
    }

    @Override
    public FuncParamNode visitParam_decl_list(LITTLEParser.Param_decl_listContext ctx) {
        FuncParamNode temp = new FuncParamNode();

        temp.declarationContent = visitParam_decl(ctx.param_decl());
        if(ctx.param_decl_tail().getChild(0) != null) {
            temp.nextDeclaration = visitParam_decl_tail(ctx.param_decl_tail());
        } else {
            temp.nextDeclaration = null;
        }

        return temp;
    }

    @Override
    public DeclContentNode visitParam_decl(LITTLEParser.Param_declContext ctx) {
        DeclContentNode temp = new DeclContentNode();

        temp.type = ctx.var_type().toString();
        temp.ID = new ArrayList<>();
        temp.ID.add(ctx.id().getChild(0).toString());

        return temp;
    }

    @Override
    public FuncParamNode visitParam_decl_tail(LITTLEParser.Param_decl_tailContext ctx) {
        FuncParamNode temp = new FuncParamNode();

        temp.declarationContent = visitParam_decl(ctx.param_decl());

        if(ctx.param_decl_tail() != null) {
            temp.nextDeclaration = visitParam_decl_tail(ctx.param_decl_tail());
        }

        return temp;
    }

    @Override
    public StmtNode visitStmt_list(LITTLEParser.Stmt_listContext ctx) {
        StmtNode temp;

        if(ctx.stmt().base_stmt() != null) {
            temp = visitBase_stmt(ctx.stmt().base_stmt());
        } else if(ctx.stmt().while_stmt() != null) {
            temp = visitWhile_stmt(ctx.stmt().while_stmt());
        } else if(ctx.stmt().if_stmt() != null) {
            temp = visitIf_stmt(ctx.stmt().if_stmt());
        } else {
            temp = new StmtNode();
        }

        if(ctx.stmt_list().getChild(0) != null) {
            temp.next = visitStmt_list(ctx.stmt_list());
        } else {
            temp.next = null;
        }

        return temp;
    }

    @Override
    public BaseStmtNode visitBase_stmt(LITTLEParser.Base_stmtContext ctx) {
        BaseStmtNode temp = new BaseStmtNode();

        if(ctx.assign_stmt() != null) {
            temp = visitAssign_stmt(ctx.assign_stmt());
        } else if(ctx.read_stmt() != null) {
            temp = visitRead_stmt(ctx.read_stmt());
        } else if(ctx.write_stmt() != null) {
            temp = visitWrite_stmt(ctx.write_stmt());
        } else if(ctx.return_stmt() != null) {
            temp = visitReturn_stmt(ctx.return_stmt());
        }

        return temp;
    }

    @Override
    public ConditionNode visitCond(LITTLEParser.CondContext ctx) {
        ConditionNode temp = new ConditionNode();

        if(ctx.compop().LESS_OP() != null) {
            temp.operator = "<";
        } else if(ctx.compop().LESSEQ_OP() != null) {
            temp.operator = "<=";
        } else if(ctx.compop().GREAT_OP() != null) {
            temp.operator = ">";
        } else if(ctx.compop().GREATEQ_OP() != null) {
            temp.operator = ">=";
        } else if(ctx.compop().NOTEQ_OP() != null) {
            temp.operator = "!=";
        } else {
            temp.operator = "=";
        }

        temp.op1 = visitExpr(ctx.expr(0));
        temp.op2 = visitExpr(ctx.expr(1));

        return temp;
    }

    @Override
    public IfStmtNode visitIf_stmt(LITTLEParser.If_stmtContext ctx) {
        IfStmtNode temp = new IfStmtNode();

        blockNumber++;
        temp.blockName = "BLOCK" + blockNumber;

        temp.condition = visitCond(ctx.cond());
        temp.ifBody = visitStmt_list(ctx.stmt_list());
        temp.declarations = visitDecl(ctx.decl());

        if(ctx.else_part().getChild(0) != null) {
            temp.elseBody = visitElse_part(ctx.else_part());
        } else {
            temp.elseBody = null;
        }

        return temp;
    }

    @Override
    public ElseNode visitElse_part(LITTLEParser.Else_partContext ctx) {
        ElseNode temp = new ElseNode();

        blockNumber++;
        temp.blockName = "BLOCK" + blockNumber;

        if(ctx.stmt_list().getChild(0) != null) {
            temp.body = visitStmt_list(ctx.stmt_list());
        }

        temp.declarations = visitDecl(ctx.decl());

        return temp;
    }

    @Override
    public WhileStmtNode visitWhile_stmt(LITTLEParser.While_stmtContext ctx) {
        WhileStmtNode temp = new WhileStmtNode();

        blockNumber++;
        temp.blockName = "BLOCK" + blockNumber;

        temp.condition = visitCond(ctx.cond());
        temp.body = visitStmt_list(ctx.stmt_list());
        temp.declarations = visitDecl(ctx.decl());

        return temp;
    }

    @Override
    public AssignStmtNode visitAssign_stmt(LITTLEParser.Assign_stmtContext ctx) {
        AssignStmtNode temp = new AssignStmtNode();

        temp.ID = ctx.assign_expr().id().getChild(0).toString();
        temp.expression = visitExpr(ctx.assign_expr().expr());

        return temp;
    }

    @Override
    public ReadStmtNode visitRead_stmt(LITTLEParser.Read_stmtContext ctx) {
        ReadStmtNode temp = new ReadStmtNode();

        ParseTree idList = ctx.getChild(2);
        temp.idList = new ArrayList<>();
        temp.idList.add(idList.getChild(0).getChild(0).toString());

        ParseTree idTail = idList.getChild(1);
        while(idTail.getChild(0) != null) {
            temp.idList.add(idTail.getChild(1).getChild(0).toString());
            idTail = idTail.getChild(2);
        }

        return temp;
    }

    @Override
    public WriteStmtNode visitWrite_stmt(LITTLEParser.Write_stmtContext ctx) {
        WriteStmtNode temp = new WriteStmtNode();

        ParseTree idList = ctx.getChild(2);
        temp.idList = new ArrayList<>();
        temp.idList.add(idList.getChild(0).getChild(0).toString());

        ParseTree idTail = idList.getChild(1);
        while(idTail.getChild(0) != null) {
            temp.idList.add(idTail.getChild(1).getChild(0).toString());
            idTail = idTail.getChild(2);
        }

        return temp;
    }

    @Override
    public ReturnStmtNode visitReturn_stmt(LITTLEParser.Return_stmtContext ctx) {
        ReturnStmtNode temp = new ReturnStmtNode();

        temp.expression = visitExpr(ctx.expr());

        return temp;
    }

    @Override
    public ExprNode visitExpr(LITTLEParser.ExprContext ctx) {
        ExprNode temp;

        if(ctx.expr_prefix().getChild(0) != null) {
            AddNode a = visitExpr_prefix(ctx.expr_prefix());
            a.rightPart = visitFactor(ctx.factor());
            temp = a;
        } else {
            temp = visitFactor(ctx.factor());
        }

        return temp;
    }

    @Override
    public AddNode visitExpr_prefix(LITTLEParser.Expr_prefixContext ctx) {
        AddNode temp = new AddNode();

        if(ctx.expr_prefix().getChild(0) != null) {
            AddNode a = visitExpr_prefix(ctx.expr_prefix());
            a.rightPart = visitFactor(ctx.factor());
            temp.leftPart = a;
        } else {
            ExprNode e = visitFactor(ctx.factor());
            temp.leftPart = e;
        }

        if(ctx.addop().SUB_OP() != null) {
            temp.operator = "-";
        } else {
            temp.operator = "+";
        }

        return temp;
    }

    @Override
    public ExprNode visitFactor(LITTLEParser.FactorContext ctx) {
        ExprNode temp;

        if(ctx.factor_prefix().getChild(0) != null) {
            MultNode m = visitFactor_prefix(ctx.factor_prefix());
            m.rightPart = visitPostfix_expr(ctx.postfix_expr());
            temp = m;
        } else {
            temp = visitPostfix_expr(ctx.postfix_expr());
        }

        return temp;
    }

    @Override
    public MultNode visitFactor_prefix(LITTLEParser.Factor_prefixContext ctx) {
        MultNode temp = new MultNode();

        if(ctx.factor_prefix().getChild(0) != null) {
            MultNode m = visitFactor_prefix(ctx.factor_prefix());
            m.rightPart = visitPostfix_expr(ctx.postfix_expr());
            temp.leftPart = m;
        } else {
            temp.leftPart = visitPostfix_expr(ctx.postfix_expr());
        }

        if(ctx.mulop().DIV_OP() != null) {
            temp.operator = "/";
        } else {
            temp.operator = "*";
        }

        return temp;
    }

    @Override
    public ExprNode visitPostfix_expr(LITTLEParser.Postfix_exprContext ctx) {
        ExprNode temp;

        if(ctx.primary() != null) {
            temp = visitPrimary(ctx.primary());
        } else {
            temp = visitCall_expr(ctx.call_expr());
        }

        return temp;
    }

    @Override
    public FunctionCallNode visitCall_expr(LITTLEParser.Call_exprContext ctx) {
        FunctionCallNode temp = new FunctionCallNode();

        temp.ID = ctx.id().getChild(0).toString();
        if(ctx.expr_list() != null) {
            temp.arguments = visitExpr_list(ctx.expr_list());
        }

        return temp;
    }

    @Override
    public ArrayList<ExprNode> visitExpr_list(LITTLEParser.Expr_listContext ctx) {
        ArrayList<ExprNode> temp = new ArrayList<>();

        temp.add(visitExpr(ctx.expr()));
        LITTLEParser.Expr_list_tailContext expr_tail = ctx.expr_list_tail();
        while(expr_tail.getChild(0) != null) {
            temp.add(visitExpr(expr_tail.expr()));
            expr_tail = expr_tail.expr_list_tail();
        }

        return temp;
    }

    @Override
    public ExprNode visitPrimary(LITTLEParser.PrimaryContext ctx) {
        ExprNode temp = new ExprNode();

        if(ctx.expr() != null) {
            temp = visitExpr(ctx.expr());
        } else if(ctx.id() != null) {
            VarNode v = new VarNode();
            v.ID = ctx.id().getChild(0).toString();
            temp = v;
        } else if(ctx.INTLITERAL() != null) {
            IntNode i = new IntNode();
            i.value = ctx.INTLITERAL().toString();
            temp = i;
        } else if(ctx.FLOATLITERAL() != null) {
            FloatNode f = new FloatNode();
            f.value = ctx.FLOATLITERAL().toString();
            temp = f;
        }

        return temp;
    }
}
