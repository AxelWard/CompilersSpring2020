package DeclNodes;

public  class ConcreteDeclNode extends AbstractDeclNode
{
    public ConcreteDeclNode parent;
    protected ConcreteDeclNode other;
    public char terminator;
    public ConcreteDeclNode(String val, ConcreteDeclNode par, String term)
    {
        super(val, par);
        this.terminator = term;
    }
    public void AddOtherDecl(ConcreteDeclNode oth){
        assert other == null : "other is non-null. Consider getting its child node and adding there.";
        this.other = oth;
    }

    public ConcreteDeclNode GetOtherDecl(){
        assert other != null : "Other is null. Consider adding a node.";
        return this.other;
    }
    @Override
    public String toString() { 
            if(other != null)
            {
                return this.identifier  + '\t' + other.toString();
            } else{
                return this.identifier + terminator;
            }
         
    } 
    
}