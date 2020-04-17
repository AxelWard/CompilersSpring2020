package DeclNodes;

public class ParametersNode extends ConcreteDeclNode
{
    public ConcreteDeclNode decls, tail;
    protected String typeID;
    public ParametersNode(final String type, final String val, final ConcreteDeclNode par) {
      super(val, par);
      this.typeID = type;
    }

}