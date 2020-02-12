import LITTLE.LITTLELexer;
import LITTLE.LITTLEParser;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.CharStreams;
import org.antlr.v4.runtime.CommonTokenStream;
import org.antlr.v4.runtime.Vocabulary;
import org.antlr.v4.runtime.tree.ParseTree;
import org.antlr.v4.runtime.tree.ParseTreeWalker;

import java.io.IOException;

public class Main {
    public static void main(String args[]) {
        String source = args[0];
        String fileParts[] = source.split("/");
        String fileName = fileParts[(fileParts.length)-1].replace(".micro", "");

        try {
            CharStream cs = CharStreams.fromFileName(source);
            LITTLE.LITTLELexer lexer = new LITTLELexer(cs);
            LITTLE.LITTLEParser parser = new LITTLEParser(new CommonTokenStream(lexer));

            Vocabulary v = parser.getVocabulary();

            if(args.length == 2) {
                fileName = args[1] + "/" + fileName;
            }

            Listner l = new Listner(v, (fileName + ".out"));

            ParseTreeWalker.DEFAULT.walk(l, parser.program());
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
