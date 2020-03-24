

public class VarDeclNode extends ConcreteDeclNode
{
    protected ConcreteDeclNode other;
    public VarDeclNode(final String val, final ConcreteDeclNode par) {
      super(val, par);
    }

}