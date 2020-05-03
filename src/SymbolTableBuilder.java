import org.antlr.v4.runtime.Vocabulary;
import org.antlr.v4.runtime.tree.ParseTree;

public class SymbolTableBuilder extends LITTLEBaseListener {

    private Vocabulary voc;
    private TableStack TS;

    private SymbolTable current;

    private int blockNumber;

    SymbolTableBuilder(Vocabulary v) {
        this.voc = v;
        this.TS = new TableStack();
        blockNumber = 0;
    }

    @Override
    public void enterProgram(LITTLEParser.ProgramContext ctx) {
        // Create global stack
        current = new SymbolTable("GLOBAL");

        // Add all global variables
        ParseTree variableTree = ctx.getChild(3);
        if(variableTree != null) {
            if (variableTree.getChildCount() > 0) {
                variableTree = variableTree.getChild(0);
                getVariables(variableTree, "GLOBAL");
            }
        }

        TS.addTable(current);
    }

    @Override
    public void enterFunc_decl(LITTLEParser.Func_declContext ctx) {

        String functionName = ctx.getChild(2).getChild(0).toString();
        current = new SymbolTable(functionName);

        // Add all function variables (parameters and declared variables)
        ParseTree params = ctx.getChild(4);

        while(params.getChildCount() > 1) {
            if(params.getChildCount() == 2) {
                // Get variable from parameter list
                ParseTree param = params.getChild(0);
                String varType = param.getChild(0).getChild(0).toString();
                String varName = param.getChild(1).getChild(0).toString();

                if (current.checkTable(varName)) {
                    current.push_var(varName, varType, functionName);
                }

                params = params.getChild(1);
            } else if(params.getChildCount() == 3) {
                // Get variable from parameter list
                ParseTree param = params.getChild(1);
                String varType = param.getChild(0).getChild(0).toString();
                String varName = param.getChild(1).getChild(0).toString();

                if (current.checkTable(varName)) {
                    current.push_var(varName, varType, functionName);
                }

                params = params.getChild(2);
            }
        }

        ParseTree variableTree = ctx.getChild(7);
        if(variableTree != null) {
            if (variableTree.getChildCount() > 0) {
                variableTree = variableTree.getChild(0);
                getVariables(variableTree, functionName);
            }
        }

        TS.addTable(current);
    }

    @Override
    public void enterIf_stmt(LITTLEParser.If_stmtContext ctx) {
        blockNumber++;
        current = new SymbolTable("BLOCK" + blockNumber);

        // Add all variables from within the if statement
        ParseTree variableTree = ctx.getChild(4);
        getVariables(variableTree, "BLOCK" + blockNumber);

        TS.addTable(current);
    }

    @Override
    public void enterElse_part(LITTLEParser.Else_partContext ctx) {
        if(ctx.getChildCount() != 0) {
            blockNumber++;
            SymbolTable current = new SymbolTable("BLOCK" + blockNumber);

            // Add all variables from within the else statement
            ParseTree variableTree = ctx.getChild(1);
            if (variableTree != null) {
                if (variableTree.getChildCount() > 0) {
                    getVariables(variableTree, "BLOCK" + blockNumber);
                }
            }

            TS.addTable(current);
        }
    }

    @Override
    public void exitElse_part(LITTLEParser.Else_partContext ctx) {
        if(ctx.getChildCount() != 0) {
            TS.popTable();
        }
    }

    @Override
    public void enterWhile_stmt(LITTLEParser.While_stmtContext ctx) {
        blockNumber++;
        current = new SymbolTable("BLOCK" + blockNumber);

        // Add all variables from within the while statement
        ParseTree variableTree = ctx.getChild(4);
        getVariables(variableTree, "BLOCK" + blockNumber);

        TS.addTable(current);
    }

    // Function to get all of the variables from a decl statement
    protected void getVariables(ParseTree VT, String blockName) {
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
                    current.push_var(id, type, value, blockName);
                }
            } else {
                type = variable.getChild(0).getChild(0).toString();

                ParseTree IDList = variable.getChild(1);
                id = IDList.getChild(0).getChild(0).toString();
                if(TS.checkStack(id)) {
                    current.push_var(id, type, blockName);
                }

                ParseTree IDTail = IDList.getChild(1);
                while(IDTail.getChildCount() == 3) {
                    id = IDTail.getChild(1).getChild(0).toString();
                    if(TS.checkStack(id)) {
                        current.push_var(id, type, blockName);
                    }

                    IDTail = IDTail.getChild(2);
                }
            }

            VT = VT.getChild(1);
        }
    }

    public TableStack getLookupTable() {
        return TS;
    }
}
