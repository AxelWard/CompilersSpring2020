

public class ProgramBodyNode extends ConcreteDeclNode
{
  //  public FunctionDeclarationNode funcDecl;
    protected ConcreteDeclNode other;
    protected FuncDeclNode functions;
    private ProgramNode program;
    public ProgramBodyNode(final String val, final ConcreteDeclNode par) {
      super (val, par);
        this.program.body = this.program.body == null? this : this.program.body; //Ah yes, another singleton! :D
    }
}