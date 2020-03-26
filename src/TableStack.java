import java.lang.reflect.Array;
import java.util.ArrayList;

public class TableStack {
    ArrayList<SymbolTable> stack;

    TableStack() {
        stack = new ArrayList<SymbolTable>();
    }

    public void addTable(SymbolTable s) {
        s.print_table();
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


}
