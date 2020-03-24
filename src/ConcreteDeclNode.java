
public  class ConcreteDeclNode extends DeclNode
{
    public String identifier;
    public DeclNode parent;
    public ConcreteDeclNode(String val, DeclNode par)
    {
        super(val, par);
    }
}