import LITTLE.LITTLELexer;
import LITTLE.LITTLEParser;
import org.antlr.v4.runtime.*;

import java.io.IOException;

// Code for Axel Ward, Ahmed Naji, and Jacob Ziehli

public class Main {
    public static void main(String args[]) {
        String source = args[0];
        String fileParts[] = source.split("/");
        String fileName = fileParts[(fileParts.length)-1].replace(".micro", "");

        Parser p = new Parser();

        try {
            CharStream cs = CharStreams.fromFileName(source);
            LITTLE.LITTLELexer lexer = new LITTLELexer(cs);
            LITTLE.LITTLEParser parser = new LITTLEParser(new CommonTokenStream(lexer));

            Vocabulary v = parser.getVocabulary();

            if(args.length == 2) {
                fileName = args[1] + "/" + fileName;
            }


        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
