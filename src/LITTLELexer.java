// Generated from C:/Compilers/grammars\LITTLE.g4 by ANTLR 4.8

import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class LITTLELexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.8", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		PRG_KEYWORD=1, BEG_KEYWORD=2, END_KEYWORD=3, FUNC_KEYWORD=4, READ_KEYWORD=5, 
		WRITE_KEYWORD=6, IF_KEYWORD=7, ELSE_KEYWORD=8, ENDIF_KEYWORD=9, WHILE_KEYWORD=10, 
		ENDWHILE_KEYWORD=11, CONT_KEYWORD=12, BRK_KEYWORD=13, RETN_KEYWORD=14, 
		INT_KEYWORD=15, VOID_KEYWORD=16, STR_KEYWORD=17, FLT_KEYWORD=18, PLUS_OP=19, 
		MULT_OP=20, DIV_OP=21, SUB_OP=22, ASSIGN_OP=23, OPEN_OP=24, CLOSE_OP=25, 
		COMMA_OP=26, EQ_OP=27, LESS_OP=28, GREAT_OP=29, NOTEQ_OP=30, LESSEQ_OP=31, 
		GREATEQ_OP=32, SEMICOLON=33, COMMENT=34, IDENTIFIER=35, INTLITERAL=36, 
		FLOATLITERAL=37, STRINGLITERAL=38, WS=39;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"PRG_KEYWORD", "BEG_KEYWORD", "END_KEYWORD", "FUNC_KEYWORD", "READ_KEYWORD", 
			"WRITE_KEYWORD", "IF_KEYWORD", "ELSE_KEYWORD", "ENDIF_KEYWORD", "WHILE_KEYWORD", 
			"ENDWHILE_KEYWORD", "CONT_KEYWORD", "BRK_KEYWORD", "RETN_KEYWORD", "INT_KEYWORD", 
			"VOID_KEYWORD", "STR_KEYWORD", "FLT_KEYWORD", "PLUS_OP", "MULT_OP", "DIV_OP", 
			"SUB_OP", "ASSIGN_OP", "OPEN_OP", "CLOSE_OP", "COMMA_OP", "EQ_OP", "LESS_OP", 
			"GREAT_OP", "NOTEQ_OP", "LESSEQ_OP", "GREATEQ_OP", "SEMICOLON", "LETTER", 
			"DIGIT", "COMMENT", "IDENTIFIER", "INTLITERAL", "FLOATLITERAL", "STRINGLITERAL", 
			"WS"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'PROGRAM'", "'BEGIN'", "'END'", "'FUNCTION'", "'READ'", "'WRITE'", 
			"'IF'", "'ELSE'", "'ENDIF'", "'WHILE'", "'ENDWHILE'", "'CONTINUE'", "'BREAK'", 
			"'RETURN'", "'INT'", "'VOID'", "'STRING'", "'FLOAT'", "'+'", "'*'", "'/'", 
			"'-'", "':='", "'('", "')'", "','", "'='", "'<'", "'>'", "'!='", "'<='", 
			"'>='", "';'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "PRG_KEYWORD", "BEG_KEYWORD", "END_KEYWORD", "FUNC_KEYWORD", "READ_KEYWORD", 
			"WRITE_KEYWORD", "IF_KEYWORD", "ELSE_KEYWORD", "ENDIF_KEYWORD", "WHILE_KEYWORD", 
			"ENDWHILE_KEYWORD", "CONT_KEYWORD", "BRK_KEYWORD", "RETN_KEYWORD", "INT_KEYWORD", 
			"VOID_KEYWORD", "STR_KEYWORD", "FLT_KEYWORD", "PLUS_OP", "MULT_OP", "DIV_OP", 
			"SUB_OP", "ASSIGN_OP", "OPEN_OP", "CLOSE_OP", "COMMA_OP", "EQ_OP", "LESS_OP", 
			"GREAT_OP", "NOTEQ_OP", "LESSEQ_OP", "GREATEQ_OP", "SEMICOLON", "COMMENT", 
			"IDENTIFIER", "INTLITERAL", "FLOATLITERAL", "STRINGLITERAL", "WS"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public LITTLELexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "LITTLE.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2)\u0125\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\3\2\3\2"+
		"\3\2\3\2\3\2\3\2\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3\4\3\5\3"+
		"\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\6\3\6\3\6\3\6\3\6\3\7\3\7\3\7\3\7\3\7"+
		"\3\7\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t\3\n\3\n\3\n\3\n\3\n\3\n\3\13\3\13"+
		"\3\13\3\13\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\r\3\r\3\r\3"+
		"\r\3\r\3\r\3\r\3\r\3\r\3\16\3\16\3\16\3\16\3\16\3\16\3\17\3\17\3\17\3"+
		"\17\3\17\3\17\3\17\3\20\3\20\3\20\3\20\3\21\3\21\3\21\3\21\3\21\3\22\3"+
		"\22\3\22\3\22\3\22\3\22\3\22\3\23\3\23\3\23\3\23\3\23\3\23\3\24\3\24\3"+
		"\25\3\25\3\26\3\26\3\27\3\27\3\30\3\30\3\30\3\31\3\31\3\32\3\32\3\33\3"+
		"\33\3\34\3\34\3\35\3\35\3\36\3\36\3\37\3\37\3\37\3 \3 \3 \3!\3!\3!\3\""+
		"\3\"\3#\5#\u00e8\n#\3$\3$\3%\3%\3%\3%\6%\u00f0\n%\r%\16%\u00f1\3%\3%\3"+
		"&\3&\3&\7&\u00f9\n&\f&\16&\u00fc\13&\3\'\6\'\u00ff\n\'\r\'\16\'\u0100"+
		"\3(\6(\u0104\n(\r(\16(\u0105\3(\3(\6(\u010a\n(\r(\16(\u010b\3(\3(\6(\u0110"+
		"\n(\r(\16(\u0111\5(\u0114\n(\3)\3)\7)\u0118\n)\f)\16)\u011b\13)\3)\3)"+
		"\3*\6*\u0120\n*\r*\16*\u0121\3*\3*\2\2+\3\3\5\4\7\5\t\6\13\7\r\b\17\t"+
		"\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25)\26+\27"+
		"-\30/\31\61\32\63\33\65\34\67\359\36;\37= ?!A\"C#E\2G\2I$K%M&O\'Q(S)\3"+
		"\2\7\4\2C\\c|\3\2\62;\3\2\f\f\3\2$$\5\2\13\f\17\17\"\"\2\u012c\2\3\3\2"+
		"\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17"+
		"\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2"+
		"\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3"+
		"\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3"+
		"\2\2\2\2\63\3\2\2\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2"+
		"=\3\2\2\2\2?\3\2\2\2\2A\3\2\2\2\2C\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2\2M\3"+
		"\2\2\2\2O\3\2\2\2\2Q\3\2\2\2\2S\3\2\2\2\3U\3\2\2\2\5]\3\2\2\2\7c\3\2\2"+
		"\2\tg\3\2\2\2\13p\3\2\2\2\ru\3\2\2\2\17{\3\2\2\2\21~\3\2\2\2\23\u0083"+
		"\3\2\2\2\25\u0089\3\2\2\2\27\u008f\3\2\2\2\31\u0098\3\2\2\2\33\u00a1\3"+
		"\2\2\2\35\u00a7\3\2\2\2\37\u00ae\3\2\2\2!\u00b2\3\2\2\2#\u00b7\3\2\2\2"+
		"%\u00be\3\2\2\2\'\u00c4\3\2\2\2)\u00c6\3\2\2\2+\u00c8\3\2\2\2-\u00ca\3"+
		"\2\2\2/\u00cc\3\2\2\2\61\u00cf\3\2\2\2\63\u00d1\3\2\2\2\65\u00d3\3\2\2"+
		"\2\67\u00d5\3\2\2\29\u00d7\3\2\2\2;\u00d9\3\2\2\2=\u00db\3\2\2\2?\u00de"+
		"\3\2\2\2A\u00e1\3\2\2\2C\u00e4\3\2\2\2E\u00e7\3\2\2\2G\u00e9\3\2\2\2I"+
		"\u00eb\3\2\2\2K\u00f5\3\2\2\2M\u00fe\3\2\2\2O\u0113\3\2\2\2Q\u0115\3\2"+
		"\2\2S\u011f\3\2\2\2UV\7R\2\2VW\7T\2\2WX\7Q\2\2XY\7I\2\2YZ\7T\2\2Z[\7C"+
		"\2\2[\\\7O\2\2\\\4\3\2\2\2]^\7D\2\2^_\7G\2\2_`\7I\2\2`a\7K\2\2ab\7P\2"+
		"\2b\6\3\2\2\2cd\7G\2\2de\7P\2\2ef\7F\2\2f\b\3\2\2\2gh\7H\2\2hi\7W\2\2"+
		"ij\7P\2\2jk\7E\2\2kl\7V\2\2lm\7K\2\2mn\7Q\2\2no\7P\2\2o\n\3\2\2\2pq\7"+
		"T\2\2qr\7G\2\2rs\7C\2\2st\7F\2\2t\f\3\2\2\2uv\7Y\2\2vw\7T\2\2wx\7K\2\2"+
		"xy\7V\2\2yz\7G\2\2z\16\3\2\2\2{|\7K\2\2|}\7H\2\2}\20\3\2\2\2~\177\7G\2"+
		"\2\177\u0080\7N\2\2\u0080\u0081\7U\2\2\u0081\u0082\7G\2\2\u0082\22\3\2"+
		"\2\2\u0083\u0084\7G\2\2\u0084\u0085\7P\2\2\u0085\u0086\7F\2\2\u0086\u0087"+
		"\7K\2\2\u0087\u0088\7H\2\2\u0088\24\3\2\2\2\u0089\u008a\7Y\2\2\u008a\u008b"+
		"\7J\2\2\u008b\u008c\7K\2\2\u008c\u008d\7N\2\2\u008d\u008e\7G\2\2\u008e"+
		"\26\3\2\2\2\u008f\u0090\7G\2\2\u0090\u0091\7P\2\2\u0091\u0092\7F\2\2\u0092"+
		"\u0093\7Y\2\2\u0093\u0094\7J\2\2\u0094\u0095\7K\2\2\u0095\u0096\7N\2\2"+
		"\u0096\u0097\7G\2\2\u0097\30\3\2\2\2\u0098\u0099\7E\2\2\u0099\u009a\7"+
		"Q\2\2\u009a\u009b\7P\2\2\u009b\u009c\7V\2\2\u009c\u009d\7K\2\2\u009d\u009e"+
		"\7P\2\2\u009e\u009f\7W\2\2\u009f\u00a0\7G\2\2\u00a0\32\3\2\2\2\u00a1\u00a2"+
		"\7D\2\2\u00a2\u00a3\7T\2\2\u00a3\u00a4\7G\2\2\u00a4\u00a5\7C\2\2\u00a5"+
		"\u00a6\7M\2\2\u00a6\34\3\2\2\2\u00a7\u00a8\7T\2\2\u00a8\u00a9\7G\2\2\u00a9"+
		"\u00aa\7V\2\2\u00aa\u00ab\7W\2\2\u00ab\u00ac\7T\2\2\u00ac\u00ad\7P\2\2"+
		"\u00ad\36\3\2\2\2\u00ae\u00af\7K\2\2\u00af\u00b0\7P\2\2\u00b0\u00b1\7"+
		"V\2\2\u00b1 \3\2\2\2\u00b2\u00b3\7X\2\2\u00b3\u00b4\7Q\2\2\u00b4\u00b5"+
		"\7K\2\2\u00b5\u00b6\7F\2\2\u00b6\"\3\2\2\2\u00b7\u00b8\7U\2\2\u00b8\u00b9"+
		"\7V\2\2\u00b9\u00ba\7T\2\2\u00ba\u00bb\7K\2\2\u00bb\u00bc\7P\2\2\u00bc"+
		"\u00bd\7I\2\2\u00bd$\3\2\2\2\u00be\u00bf\7H\2\2\u00bf\u00c0\7N\2\2\u00c0"+
		"\u00c1\7Q\2\2\u00c1\u00c2\7C\2\2\u00c2\u00c3\7V\2\2\u00c3&\3\2\2\2\u00c4"+
		"\u00c5\7-\2\2\u00c5(\3\2\2\2\u00c6\u00c7\7,\2\2\u00c7*\3\2\2\2\u00c8\u00c9"+
		"\7\61\2\2\u00c9,\3\2\2\2\u00ca\u00cb\7/\2\2\u00cb.\3\2\2\2\u00cc\u00cd"+
		"\7<\2\2\u00cd\u00ce\7?\2\2\u00ce\60\3\2\2\2\u00cf\u00d0\7*\2\2\u00d0\62"+
		"\3\2\2\2\u00d1\u00d2\7+\2\2\u00d2\64\3\2\2\2\u00d3\u00d4\7.\2\2\u00d4"+
		"\66\3\2\2\2\u00d5\u00d6\7?\2\2\u00d68\3\2\2\2\u00d7\u00d8\7>\2\2\u00d8"+
		":\3\2\2\2\u00d9\u00da\7@\2\2\u00da<\3\2\2\2\u00db\u00dc\7#\2\2\u00dc\u00dd"+
		"\7?\2\2\u00dd>\3\2\2\2\u00de\u00df\7>\2\2\u00df\u00e0\7?\2\2\u00e0@\3"+
		"\2\2\2\u00e1\u00e2\7@\2\2\u00e2\u00e3\7?\2\2\u00e3B\3\2\2\2\u00e4\u00e5"+
		"\7=\2\2\u00e5D\3\2\2\2\u00e6\u00e8\t\2\2\2\u00e7\u00e6\3\2\2\2\u00e8F"+
		"\3\2\2\2\u00e9\u00ea\t\3\2\2\u00eaH\3\2\2\2\u00eb\u00ec\7/\2\2\u00ec\u00ed"+
		"\7/\2\2\u00ed\u00ef\3\2\2\2\u00ee\u00f0\n\4\2\2\u00ef\u00ee\3\2\2\2\u00f0"+
		"\u00f1\3\2\2\2\u00f1\u00ef\3\2\2\2\u00f1\u00f2\3\2\2\2\u00f2\u00f3\3\2"+
		"\2\2\u00f3\u00f4\b%\2\2\u00f4J\3\2\2\2\u00f5\u00fa\5E#\2\u00f6\u00f9\5"+
		"E#\2\u00f7\u00f9\5G$\2\u00f8\u00f6\3\2\2\2\u00f8\u00f7\3\2\2\2\u00f9\u00fc"+
		"\3\2\2\2\u00fa\u00f8\3\2\2\2\u00fa\u00fb\3\2\2\2\u00fbL\3\2\2\2\u00fc"+
		"\u00fa\3\2\2\2\u00fd\u00ff\5G$\2\u00fe\u00fd\3\2\2\2\u00ff\u0100\3\2\2"+
		"\2\u0100\u00fe\3\2\2\2\u0100\u0101\3\2\2\2\u0101N\3\2\2\2\u0102\u0104"+
		"\5G$\2\u0103\u0102\3\2\2\2\u0104\u0105\3\2\2\2\u0105\u0103\3\2\2\2\u0105"+
		"\u0106\3\2\2\2\u0106\u0107\3\2\2\2\u0107\u0109\7\60\2\2\u0108\u010a\5"+
		"G$\2\u0109\u0108\3\2\2\2\u010a\u010b\3\2\2\2\u010b\u0109\3\2\2\2\u010b"+
		"\u010c\3\2\2\2\u010c\u0114\3\2\2\2\u010d\u010f\7\60\2\2\u010e\u0110\5"+
		"G$\2\u010f\u010e\3\2\2\2\u0110\u0111\3\2\2\2\u0111\u010f\3\2\2\2\u0111"+
		"\u0112\3\2\2\2\u0112\u0114\3\2\2\2\u0113\u0103\3\2\2\2\u0113\u010d\3\2"+
		"\2\2\u0114P\3\2\2\2\u0115\u0119\7$\2\2\u0116\u0118\n\5\2\2\u0117\u0116"+
		"\3\2\2\2\u0118\u011b\3\2\2\2\u0119\u0117\3\2\2\2\u0119\u011a\3\2\2\2\u011a"+
		"\u011c\3\2\2\2\u011b\u0119\3\2\2\2\u011c\u011d\7$\2\2\u011dR\3\2\2\2\u011e"+
		"\u0120\t\6\2\2\u011f\u011e\3\2\2\2\u0120\u0121\3\2\2\2\u0121\u011f\3\2"+
		"\2\2\u0121\u0122\3\2\2\2\u0122\u0123\3\2\2\2\u0123\u0124\b*\2\2\u0124"+
		"T\3\2\2\2\16\2\u00e7\u00f1\u00f8\u00fa\u0100\u0105\u010b\u0111\u0113\u0119"+
		"\u0121\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}