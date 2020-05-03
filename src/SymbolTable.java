import org.antlr.v4.runtime.tree.ParseTree;

import java.util.ArrayList;

public class SymbolTable {

    private ArrayList<String> var_names;
    private ArrayList<String> type_names;
    private ArrayList<String> compiler_names;
    private ArrayList<String> values;

    private String scopeName;

    SymbolTable(String n) {
        var_names = new ArrayList<String>();
        compiler_names = new ArrayList<String>();
        type_names = new ArrayList<String>();
        values = new ArrayList<String>();

        scopeName = n;
    }

    public boolean push_var(String name, String type, String blockName) {
        if(checkTable(name)) {
            var_names.add(name);
            type_names.add(type);
            values.add("");
            compiler_names.add(blockName + name);
            return true;
        }

        return false;
    }

    public boolean push_var(String name, String type, String value, String blockName) {
        if(checkTable(name)) {
            var_names.add(name);
            type_names.add(type);
            values.add(value);
            compiler_names.add(blockName + name);
            return true;
        }

        return false;
    }

    public void print_table() {
        System.out.println("Symbol Table " + scopeName);

        for(int i = 0; i < var_names.size(); i++) {
            System.out.print("name ");
            System.out.print(var_names.get(i));
            System.out.print(" type ");
            System.out.print(type_names.get(i));

            if(values.get(i).equals("")) {
                // Do nothing
            } else {
                System.out.print(" value ");
                System.out.print(values.get(i));
            }

            System.out.println("");
        }

        System.out.println("");
    }

    public boolean checkTable(String n) {
        return true;
    }

    public int size() {
        return var_names.size();
    }

    public String getType(int index) {
        String type = "";

        if(index < type_names.size()) {
            type = type_names.get(index);
        }

        return type;
    }

    public String getCompilerName(int index) {
        String name = "";

        if(index < compiler_names.size()) {
            name = compiler_names.get(index);
        }

        return name;
    }

    public String getValue(int index) {
        String value = "";

        if(index < values.size()) {
            value = values.get(index);
        }

        return value;
    }

    public String getVanillaName(int index) {
        String name = "";

        if(index < var_names.size()) {
            name = var_names.get(index);
        }

        return name;
    }

    public String getScopeName() {
        return scopeName;
    }
}
