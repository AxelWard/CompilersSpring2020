package DeclNodes;

public class ProgramBodyNode extends ConcreteDeclNode
{
  //  public FunctionDeclarationNode funcDecl;
    @Override
    protected VarDeclNode other;
    protected FuncDeclNode functions;
    private ProgramNode program;
    public ProgramBodyNode(final String val, final ConcreteDeclNode par, char term) {
      super (val, par, term);
      this.program.body = this.program.body == null? this : this.program.body; //Ah yes, another singleton! :D
    }
    @Override
    public String toString()
    {
        return other.toString() + functions.toString() + super.terminator;
    }
}