import java.util.LinkedList;

public class VarDeclNode extends ConcreteDeclNode
{
  //Super.Value is our DATATYPE, while LL<String> idList our identifiers
    public LinkedList<String> idList = new LinkedList<>();
    public KeywordNode semiColon;
    public VarDeclNode(final String val, final ConcreteDeclNode par) {
      super(val, par);
    }

}