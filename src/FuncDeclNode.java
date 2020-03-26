import jdk.internal.org.objectweb.asm.tree.ParameterNode;

public class FuncDeclNode extends ConcreteDeclNode
{
    public KeywordNode declaration, openOP, closeOP, begin, end;
    protected String typeID;
    public ParameterNode paramDecl;
    
    public FuncDeclNode(final String type, final String val, final ConcreteDeclNode par) {
      super(val, par);
      this.typeID = type;
      declaration = new KeywordNode("FUNCTION",this, '\n');
      //Finish up the OPs...
      begin = new KeywordNode("BEGIN", this, '\n');
      end = new KeywordNode("END", this, '\n');
    }

    @Override
    public String toString() { 
       return super.toString() + declaration.toString() + typeID + '\t' +  paramDecl.toString() + openOP.toString() + closeOP.toString() + begin.toString() + end.toString();
    } 
}