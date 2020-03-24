import java.util.LinkedList;

public class ProgramBodyNode extends DeclNode
{
  //  public FunctionDeclarationNode funcDecl;
    protected ConcreteDeclNode other; 
    private ProgramNode program;
    public ProgramBodyNode(String typeID, String val, ConcreteDeclNode par) {
        super(val, par);
        this.program.body = this.program.body == null? this : this.program.body; //Ah yes, another singleton! :D
    }

}