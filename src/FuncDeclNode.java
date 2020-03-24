

public class FuncDeclNode extends ConcreteDeclNode
{
    public KeywordNode declaration, openOP, closeOP, begin, end;
    protected String typeID;
    public FuncDeclNode(final String type, final String val, final ConcreteDeclNode par) {
      super(val, par);
      this.typeID = type;
    }

}