package DeclNodes;

import java.util.LinkedList;

public class VarDeclNode extends ConcreteDeclNode {
  // super.val is our DATATYPE, while LL<String> idList our identifiers
  public LinkedList<String> idList = new LinkedList<>();

  public VarDeclNode(final String val, final ConcreteDeclNode par) {
    super(val, par);
    super.terminator = ";\n";
  }

  @Override
  public String toString() {
    String tmpStr = super.val + ' ';
    int i = 0;
    for (i = 0; i < idList.size() - 1; i++) {
      tmpStr += idList.get(i) + " , ";
    }
    tmpStr += idList.get(i) + super.terminator;
    return tmpStr;
  }
}