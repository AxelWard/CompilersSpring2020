import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.tree.ParseTree;
import org.antlr.v4.runtime.tree.ParseTreeWalker;

import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;

// Code for Axel Ward, Ahmed Naji, and Jacob Ziehli

public class Main {
    public static void main(String args[]) {
        String source = args[0];

        String fileParts[] = source.split("/");
        String fileName = fileParts[(fileParts.length)-1].replace(".micro", "");

        try {
            CharStream cs = CharStreams.fromFileName(source);
            LITTLELexer lexer = new LITTLELexer(cs);
            LITTLEParser parser = new LITTLEParser(new CommonTokenStream(lexer));

            lexer.removeErrorListener(ConsoleErrorListener.INSTANCE);
            parser.removeErrorListener(ConsoleErrorListener.INSTANCE);

            parser.addErrorListener(new ErrorListener());
            parser.setErrorHandler(new ErrorStrategy());

            // Check program for errors
            int syntaxErrors = parser.getNumberOfSyntaxErrors();
            if(args.length >= 2) fileName = args[1] + "/" + fileName;

            // Prepare file writer
            FileWriter f = new FileWriter(fileName + ".out");
            if(syntaxErrors != 0) {
                System.out.println("Syntax errors in file!");
                f.append("Not accepted");
                f.flush();
                System.exit(-1);
            }

            // --------------------------
            // ----- Generate Code ------
            // --------------------------

            // Get parse tree and vocabulary
            ParseTree pt = parser.program();
            Vocabulary v = parser.getVocabulary();

            // Build lookup table
            SymbolTableBuilder l = new SymbolTableBuilder(v);
            ParseTreeWalker.DEFAULT.walk(l, pt);
            TableStack lookupTable = l.getLookupTable();

            // Build AST
            ASTBuilder ab = new ASTBuilder();
            AbstractSymbolTree a = new AbstractSymbolTree(ab.visitProgram((LITTLEParser.ProgramContext) pt));
            ArrayList<FuncHeadNode> functions = ab.getFunctions();

            // Convert AST to Assembly
            ASTConverter ASTc = new ASTConverter(f, a, functions, lookupTable);
            ASTc.convertAST();

            f.flush();
            f.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
