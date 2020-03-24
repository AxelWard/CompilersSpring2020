import java.util.LinkedList;

public class ProgramBodyNode extends DeclNode
{
  //  public FunctionDeclarationNode funcDecl;
    public LinkedList<DeclNode> otherDecl = new LinkedList<>();
    private  ProgramNode program;
    public ProgramBodyNode(String typeID, String val, DeclNode par) {
        super(null, val, par);
        this.program.body = this.program.body == null? this : this.program.body; //Ah yes, another singleton! :D
    }
    public void AddBodyChild (VarDeclNode varChildDecl)
    {
      this.otherDecl.add(varChildDecl);
    }
    
    public void AddBodyChild (FuncDeclNode fooChildDecl)
    {
      this.otherDecl.add(fooChildDecl);
    }
}