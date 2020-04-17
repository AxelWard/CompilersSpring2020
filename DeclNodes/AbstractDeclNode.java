package DeclNodes;

import LITTLE.LITTLEBaseListener;

// Code for Axel Ward, Ahmed Naji, and Jacob Ziehli
/*Reference Material (Visited 3/22/2020 @ 12:40 pm): https://stackoverflow.com/questions/29971097/how-to-create-ast-with-antlr4 */
//NOTE: We chose to use a LISTENER instead of a visitor to keep things simple and ensure things didn't get missed when walking the tree.

//NOTE TO SELF: Look to the .g4 grammar for guidance regarding AST construction and class declarations!

public abstract class AbstractDeclNode extends LITTLEBaseListener
{
    public String identifier;
    public AbstractDeclNode parent;
    public AbstractDeclNode(String val, AbstractDeclNode par)
    {
        this.parent = par;
        this.identifier = val;
    }
}