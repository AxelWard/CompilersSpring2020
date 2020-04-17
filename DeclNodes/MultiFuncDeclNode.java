package DeclNodes;

public class MultiFuncDeclNode extends ConcreteDeclNode
{
    protected MultiFuncDeclNode functions;
    protected FuncDeclNode foo;
    public MultiFuncDeclNode(final String val, final ConcreteDeclNode par) {
      super(val, par);
    }

    public void addOtherFunctions(MultiFuncDeclNode foos)
    {
      assert foo == null : "functions is non-null. Consider adding a child to it.";
      this.functions = foos;
    }

    public MultiFuncDeclNode getOtherFunctions()
    {
      assert foo != null : "functions is null. Consider adding a child.";
      return this.functions;
    }

    
    public void addOtherFunc(FuncDeclNode other)
    {
      assert foo == null : "otherFunc is non-null. Consider adding a child to it.";
      foo = other;
    }

    public FuncDeclNode getOtherFunc()
    {
      assert foo != null : "otherFunc is null. Consider adding a child.";
      return foo;
    }
}