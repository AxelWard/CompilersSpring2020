import LITTLE.LITTLELexer;
import LITTLE.LITTLEParser;
import org.antlr.v4.runtime.*;

import java.io.FileWriter;
import java.io.IOException;

// Code for Axel Ward, Ahmed Naji, and Jacob Ziehli

public class Main {
    public static void main(String args[]) {
        String source = args[0];
        String fileParts[] = source.split("/");
        String fileName = fileParts[(fileParts.length)-1].replace(".micro", "");

        try {
            CharStream cs = CharStreams.fromFileName(source);
            LITTLE.LITTLELexer lexer = new LITTLELexer(cs);
            LITTLE.LITTLEParser parser = new LITTLEParser(new CommonTokenStream(lexer));

            parser.program();
            int syntaxErrors = parser.getNumberOfSyntaxErrors();

            if(args.length >= 2) {
                fileName = args[1] + "/" + fileName;
            }

            FileWriter f = new FileWriter(fileName + ".out");
            if(syntaxErrors == 0) {
                f.append("Accepted");
            } else {
                f.append("Not accepted");
            }
            f.flush();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
