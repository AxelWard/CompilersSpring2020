import java.util.ArrayList;

public class TableStack {
    ArrayList<SymbolTable> stack;

    TableStack() {
        stack = new ArrayList<SymbolTable>();
    }

    public void addTable(SymbolTable s) {
        stack.add(s);
    }

    public void popTable() {
        stack.remove(stack.size()-1);
    }

    public boolean checkStack(String name) {
        for(int i = 0; i < stack.size(); i++) {
            if(!stack.get(i).checkTable(name)) {
                return false;
            }
        }

        return true;
    }

    public String getCompilerName(String ID, String blockName) {
        String name = "";

        for(int i = 0; i < stack.size(); i++) {
            SymbolTable currentTable = stack.get(i);
            for (int j = 0; j < currentTable.size(); j++) {
                if(currentTable.getVanillaName(j).equals(ID)) {
                    name = currentTable.getCompilerName(j);
                    break;
                }
            }

        }

        return name;
    }

    public String getVariableType(String ID, String blockName) {
        String name = "";

        for(int i = 0; i < stack.size(); i++) {
            SymbolTable currentTable = stack.get(i);
            for (int j = 0; j < currentTable.size(); j++) {
                if(currentTable.getVanillaName(j).equals(ID)) {
                    name = currentTable.getType(j);
                    break;
                }
            }
        }

        return name;
    }

    public void generateAssemblyDeclarations(AssemblyWriter aw) {
        for(int i = 0; i < stack.size(); i++) {
            SymbolTable currentTable = stack.get(i);
            for(int j = 0; j < currentTable.size(); j++) {
                if(currentTable.getType(j).equals("STRING")) {
                    aw.createStr(currentTable.getCompilerName(j), currentTable.getValue(j));
                } else {
                    aw.createVar(currentTable.getCompilerName(j));
                }
            }
        }
    }
}