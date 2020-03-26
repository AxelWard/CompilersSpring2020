

// Code for Axel Ward, Ahmed Naji, and Jacob Ziehli
/*Reference Material (Visited 3/22/2020 @ 12:40 pm): https://stackoverflow.com/questions/29971097/how-to-create-ast-with-antlr4 */
//NOTE: We chose to use a LISTENER instead of a visitor to keep things simple and ensure things didn't get missed when walking the tree.
public class ProgramNode extends ConcreteDeclNode
{
    private static ProgramNode program; //Don't want multiple programs in one file!!
    public ProgramBodyNode body;
    public KeywordNode progrmDecl, progrmBegDecl, progrmEndDecl; //Assign these as CST becomes AST these are our major program constructs (begin & end & identifier)
    public ProgramNode(final String val) {      //Val is program identifier!
        super( val, null);                      //Root node this is.
        progrmDecl = new KeywordNode("PROGRAM", this, ' ');  
        progrmBegnDecl = new KeywordNode("BEGIN", this, '\n'); 
        progrmDecl = new KeywordNode("END", this, '\n'); 
        program = program == null ? this : program;     //Yes, a singleton. Fast moving!
    }

    @Override
    public String toString()
    {               //'Bigly' recursive concatenated string! :D
        return progrmDecl.toString() + super.toString() + progrmBegDecl.toString() + body.toString() +  progrmEndDecl.toString() + super.terminator;
    }
    
}