import LITTLE.LITTLEBaseListener;
import org.antlr.v4.runtime.Vocabulary;
import org.antlr.v4.runtime.tree.TerminalNode;

import java.io.FileWriter;
import java.io.IOException;


public class Listner extends LITTLEBaseListener {

    public Vocabulary v;
    public FileWriter f;

    Listner(Vocabulary voc, String outputPath) {
        this.v = voc;
        try {
            f = new FileWriter(outputPath);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    @Override
    public void visitTerminal(TerminalNode node) {
        super.visitTerminal(node);

        try {
            if(v.getSymbolicName(node.getSymbol().getType()).equals("EOF")) {
                f.flush();
            } else {
                f.append("Token Type: " + v.getSymbolicName(node.getSymbol().getType()) + "\n");
                f.append("Value: " + node.getText() + "\n");
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
