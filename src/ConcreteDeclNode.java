
public  class ConcreteDeclNode extends AbstractDeclNode
{
    public String identifier;
    public ConcreteDeclNode parent;
    protected ConcreteDeclNode other;
    public ConcreteDeclNode(String val, ConcreteDeclNode par)
    {
        super(val, par);
    }
    public void AddOtherDecl(ConcreteDeclNode oth){
        assert other == null : "other is non-null. Consider getting its child node and adding there.";
        this.other = oth;
    }

    public ConcreteDeclNode GetOtherDecl(){
        assert other != null : "Other is null. Consider adding a node.";
        return this.other;
    }
    
}