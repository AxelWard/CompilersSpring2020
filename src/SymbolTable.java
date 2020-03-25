import java.util.ArrayList;

public class SymbolTable {

    private ArrayList<String> var_names;
    private ArrayList<String> type_names;
    private ArrayList<String> values;

    private String scopeName;

    SymbolTable(String n) {
        var_names = new ArrayList<String>();
        type_names = new ArrayList<String>();
        values = new ArrayList<String>();

        scopeName = n;
    }

    public boolean push_var(String name, String type) {
        if(checkTable(name)) {
            var_names.add(name);
            type_names.add(type);
            values.add("");
            return true;
        }

        return false;
    }

    public boolean push_var(String name, String type, String value) {
        if(checkTable(name)) {
            var_names.add(name);
            type_names.add(type);
            values.add(value);
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
        for(int i = 0; i < var_names.size(); i++) {
            if(n.equals(var_names.get(i))) {
                System.out.println("DECLARATION ERROR " + n);
                System.exit(-1);
                return false;
            }
        }

        return true;
    }
}
