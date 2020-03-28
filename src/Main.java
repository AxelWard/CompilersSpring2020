import LITTLE.LITTLELexer;
import LITTLE.LITTLEParser;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.tree.ParseTree;
import org.antlr.v4.runtime.tree.ParseTreeWalker;

import java.io.FileWriter;
import java.io.IOException;

// Code for Axel Ward, Ahmed Naji, and Jacob Ziehli

public class Main {
    public static void main(String args[]) {
        String source = args[0];
        // String source = "out/release/TestFiles/Step3/inputs/test21.micro";

        String fileParts[] = source.split("/");
        String fileName = fileParts[(fileParts.length)-1].replace(".micro", "");

        try {
            CharStream cs = CharStreams.fromFileName(source);
            LITTLE.LITTLELexer lexer = new LITTLELexer(cs);
            LITTLE.LITTLEParser parser = new LITTLEParser(new CommonTokenStream(lexer));

            lexer.removeErrorListener(ConsoleErrorListener.INSTANCE);
            parser.removeErrorListener(ConsoleErrorListener.INSTANCE);

            parser.addErrorListener(new ErrorListener());
            parser.setErrorHandler(new ErrorStrategy());

            int syntaxErrors = parser.getNumberOfSyntaxErrors();

            if(args.length >= 2) fileName = args[1] + "/" + fileName;
            FileWriter f = new FileWriter(fileName + ".out");
            if(syntaxErrors != 0) {
                System.out.println("Syntax errors in file!");
                f.append("Not accepted");
                f.flush();
                System.exit(-1);
            }

            Vocabulary v = parser.getVocabulary();

            Listener l = new Listener(v);
            ParseTree pt = parser.program();
            ParseTreeWalker.DEFAULT.walk(l, pt);

            f.flush();
            f.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
