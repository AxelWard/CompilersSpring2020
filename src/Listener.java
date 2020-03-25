import LITTLE.LITTLEBaseListener;
import LITTLE.LITTLEParser;
import org.antlr.v4.runtime.Vocabulary;
import org.antlr.v4.runtime.tree.ParseTree;

import java.util.ArrayList;

public class Listener extends LITTLEBaseListener {

    private Vocabulary voc;
    private TableStack TS;

    private SymbolTable current;

    private int blockNumber;

    Listener(Vocabulary v) {
        this.voc = v;
        this.TS = new TableStack();
        blockNumber = -1;
    }

    @Override
    public void enterProgram(LITTLEParser.ProgramContext ctx) {
        // Create global stack
        current = new SymbolTable("GLOBAL");

        // Add all global variables
        ParseTree variableTree = ctx.getChild(3);

        if(variableTree.getChildCount() > 0) {
            variableTree = variableTree.getChild(0);
        }

        getVariables(variableTree);

        TS.addTable(current);
    }

    @Override
    public void exitProgram(LITTLEParser.ProgramContext ctx) {
        TS.popTable();
    }

    @Override
    public void enterFunc_decl(LITTLEParser.Func_declContext ctx) {

        String functionName = ctx.getChild(2).getChild(0).toString();
        current = new SymbolTable(functionName);

        // Add all function variables (parameters and declared variables
        ParseTree params = ctx.getChild(3);

        while(params.getChildCount() == 2) {
            // Get variable from parameter list
            ParseTree param = params.getChild(0);
            String varType = param.getChild(0).getChild(0).toString();
            String varName = param.getChild(1).getChild(0).toString();

            if(TS.checkStack(varName) && current.checkTable(varName)) {
                current.push_var(varName, varType);
            } else {
                System.out.println("DECLARATION ERROR " + varName);
            }

            params = params.getChild(1);
        }

        if(ctx.getChild(4).getChildCount() > 0) {
            ParseTree funcDecl = ctx.getChild(4).getChild(0);
            getVariables(funcDecl);
        }

        TS.addTable(current);
    }

    @Override
    public void exitFunc_decl(LITTLEParser.Func_declContext ctx) {
        TS.popTable();
    }

    @Override
    public void enterIf_stmt(LITTLEParser.If_stmtContext ctx) {
        blockNumber++;
        current = new SymbolTable("BLOCK " + blockNumber);

        // Add all variables from within the if statement
        ParseTree variableTree = ctx.getChild(4);
        getVariables(variableTree);

        TS.addTable(current);
    }

    @Override
    public void exitIf_stmt(LITTLEParser.If_stmtContext ctx) {
        TS.popTable();
    }

    @Override
    public void enterElse_part(LITTLEParser.Else_partContext ctx) {
        blockNumber++;
        SymbolTable elseTable = new SymbolTable("BLOCK " + blockNumber);

        // Add all variables from within the else statement
        ParseTree variableTree = ctx.getChild(4);
        getVariables(variableTree);

        TS.addTable(current);
    }

    @Override
    public void exitElse_part(LITTLEParser.Else_partContext ctx) {
        TS.popTable();
    }

    @Override
    public void enterWhile_stmt(LITTLEParser.While_stmtContext ctx) {
        blockNumber++;
        current = new SymbolTable("BLOCK" + blockNumber);

        // Add all variables from within the while statement
        ParseTree variableTree = ctx.getChild(4);
        getVariables(variableTree);

        TS.addTable(current);
    }

    @Override
    public void exitWhile_stmt(LITTLEParser.While_stmtContext ctx) {
        TS.popTable();
    }

    // Function to get all of the variables from a decl statement
    protected void getVariables(ParseTree VT) {
        while(VT.getChildCount() == 2) {
            ParseTree variable = VT.getChild(0);
            String type = "";
            String id = "";
            String value = "";

            if(variable.getChild(0).toString().equals("STRING")) {
                type = variable.getChild(0).toString();
                id = variable.getChild(1).getChild(0).toString();
                value = variable.getChild(3).getChild(0).toString().replace("\"","");

                if(current.checkTable(id) && TS.checkStack(id)) {
                    current.push_var(id, type, value);
                }
            } else {
                type = variable.getChild(0).getChild(0).toString();

                ParseTree IDList = variable.getChild(1);
                id = IDList.getChild(0).getChild(0).toString();
                if(TS.checkStack(id)) {
                    current.push_var(id, type);
                }

                ParseTree IDTail = IDList.getChild(1);
                while(IDTail.getChildCount() == 3) {
                    id = IDTail.getChild(1).getChild(0).toString();
                    if(TS.checkStack(id)) {
                        current.push_var(id, type);
                    }

                    IDTail = IDTail.getChild(2);
                }
            }

            VT = VT.getChild(1);
        }
    }
}
