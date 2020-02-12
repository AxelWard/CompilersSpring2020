// Generated from C:/Compilers/grammars\LITTLE.g4 by ANTLR 4.8
package LITTLE;
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
		KEYWORD=1, OPERATOR=2, COMMENT=3, IDENTIFIER=4, INTLITERAL=5, FLOATLITERAL=6, 
		STRINGLITERAL=7, WS=8;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"KEYWORD", "OPERATOR", "LETTER", "DIGIT", "COMMENT", "IDENTIFIER", "INTLITERAL", 
			"FLOATLITERAL", "STRINGLITERAL", "WS"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "KEYWORD", "OPERATOR", "COMMENT", "IDENTIFIER", "INTLITERAL", "FLOATLITERAL", 
			"STRINGLITERAL", "WS"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\n\u00c0\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2"+
		"\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3"+
		"\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2"+
		"\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3"+
		"\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2"+
		"\3\2\3\2\3\2\3\2\3\2\3\2\3\2\5\2u\n\2\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3"+
		"\3\3\5\3\u0080\n\3\3\4\5\4\u0083\n\4\3\5\3\5\3\6\3\6\3\6\3\6\6\6\u008b"+
		"\n\6\r\6\16\6\u008c\3\6\3\6\3\7\3\7\3\7\7\7\u0094\n\7\f\7\16\7\u0097\13"+
		"\7\3\b\6\b\u009a\n\b\r\b\16\b\u009b\3\t\6\t\u009f\n\t\r\t\16\t\u00a0\3"+
		"\t\3\t\6\t\u00a5\n\t\r\t\16\t\u00a6\3\t\3\t\6\t\u00ab\n\t\r\t\16\t\u00ac"+
		"\5\t\u00af\n\t\3\n\3\n\7\n\u00b3\n\n\f\n\16\n\u00b6\13\n\3\n\3\n\3\13"+
		"\6\13\u00bb\n\13\r\13\16\13\u00bc\3\13\3\13\2\2\f\3\3\5\4\7\2\t\2\13\5"+
		"\r\6\17\7\21\b\23\t\25\n\3\2\b\5\2*/\61\61=@\4\2C\\c|\3\2\62;\3\2\f\f"+
		"\3\2$$\5\2\13\f\17\17\"\"\2\u00dc\2\3\3\2\2\2\2\5\3\2\2\2\2\13\3\2\2\2"+
		"\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\3t\3"+
		"\2\2\2\5\177\3\2\2\2\7\u0082\3\2\2\2\t\u0084\3\2\2\2\13\u0086\3\2\2\2"+
		"\r\u0090\3\2\2\2\17\u0099\3\2\2\2\21\u00ae\3\2\2\2\23\u00b0\3\2\2\2\25"+
		"\u00ba\3\2\2\2\27\30\7R\2\2\30\31\7T\2\2\31\32\7Q\2\2\32\33\7I\2\2\33"+
		"\34\7T\2\2\34\35\7C\2\2\35u\7O\2\2\36\37\7D\2\2\37 \7G\2\2 !\7I\2\2!\""+
		"\7K\2\2\"u\7P\2\2#$\7G\2\2$%\7P\2\2%u\7F\2\2&\'\7H\2\2\'(\7W\2\2()\7P"+
		"\2\2)*\7E\2\2*+\7V\2\2+,\7K\2\2,-\7Q\2\2-u\7P\2\2./\7T\2\2/\60\7G\2\2"+
		"\60\61\7C\2\2\61u\7F\2\2\62\63\7Y\2\2\63\64\7T\2\2\64\65\7K\2\2\65\66"+
		"\7V\2\2\66u\7G\2\2\678\7K\2\28u\7H\2\29:\7G\2\2:;\7N\2\2;<\7U\2\2<u\7"+
		"G\2\2=>\7G\2\2>?\7P\2\2?@\7F\2\2@A\7K\2\2Au\7H\2\2BC\7Y\2\2CD\7J\2\2D"+
		"E\7K\2\2EF\7N\2\2Fu\7G\2\2GH\7G\2\2HI\7P\2\2IJ\7F\2\2JK\7Y\2\2KL\7J\2"+
		"\2LM\7K\2\2MN\7N\2\2Nu\7G\2\2OP\7E\2\2PQ\7Q\2\2QR\7P\2\2RS\7V\2\2ST\7"+
		"K\2\2TU\7P\2\2UV\7W\2\2Vu\7G\2\2WX\7D\2\2XY\7T\2\2YZ\7G\2\2Z[\7C\2\2["+
		"u\7M\2\2\\]\7T\2\2]^\7G\2\2^_\7V\2\2_`\7W\2\2`a\7T\2\2au\7P\2\2bc\7K\2"+
		"\2cd\7P\2\2du\7V\2\2ef\7X\2\2fg\7Q\2\2gh\7K\2\2hu\7F\2\2ij\7U\2\2jk\7"+
		"V\2\2kl\7T\2\2lm\7K\2\2mn\7P\2\2nu\7I\2\2op\7H\2\2pq\7N\2\2qr\7Q\2\2r"+
		"s\7C\2\2su\7V\2\2t\27\3\2\2\2t\36\3\2\2\2t#\3\2\2\2t&\3\2\2\2t.\3\2\2"+
		"\2t\62\3\2\2\2t\67\3\2\2\2t9\3\2\2\2t=\3\2\2\2tB\3\2\2\2tG\3\2\2\2tO\3"+
		"\2\2\2tW\3\2\2\2t\\\3\2\2\2tb\3\2\2\2te\3\2\2\2ti\3\2\2\2to\3\2\2\2u\4"+
		"\3\2\2\2v\u0080\t\2\2\2wx\7<\2\2x\u0080\7?\2\2yz\7#\2\2z\u0080\7?\2\2"+
		"{|\7>\2\2|\u0080\7?\2\2}~\7@\2\2~\u0080\7?\2\2\177v\3\2\2\2\177w\3\2\2"+
		"\2\177y\3\2\2\2\177{\3\2\2\2\177}\3\2\2\2\u0080\6\3\2\2\2\u0081\u0083"+
		"\t\3\2\2\u0082\u0081\3\2\2\2\u0083\b\3\2\2\2\u0084\u0085\t\4\2\2\u0085"+
		"\n\3\2\2\2\u0086\u0087\7/\2\2\u0087\u0088\7/\2\2\u0088\u008a\3\2\2\2\u0089"+
		"\u008b\n\5\2\2\u008a\u0089\3\2\2\2\u008b\u008c\3\2\2\2\u008c\u008a\3\2"+
		"\2\2\u008c\u008d\3\2\2\2\u008d\u008e\3\2\2\2\u008e\u008f\b\6\2\2\u008f"+
		"\f\3\2\2\2\u0090\u0095\5\7\4\2\u0091\u0094\5\7\4\2\u0092\u0094\5\t\5\2"+
		"\u0093\u0091\3\2\2\2\u0093\u0092\3\2\2\2\u0094\u0097\3\2\2\2\u0095\u0093"+
		"\3\2\2\2\u0095\u0096\3\2\2\2\u0096\16\3\2\2\2\u0097\u0095\3\2\2\2\u0098"+
		"\u009a\5\t\5\2\u0099\u0098\3\2\2\2\u009a\u009b\3\2\2\2\u009b\u0099\3\2"+
		"\2\2\u009b\u009c\3\2\2\2\u009c\20\3\2\2\2\u009d\u009f\5\t\5\2\u009e\u009d"+
		"\3\2\2\2\u009f\u00a0\3\2\2\2\u00a0\u009e\3\2\2\2\u00a0\u00a1\3\2\2\2\u00a1"+
		"\u00a2\3\2\2\2\u00a2\u00a4\7\60\2\2\u00a3\u00a5\5\t\5\2\u00a4\u00a3\3"+
		"\2\2\2\u00a5\u00a6\3\2\2\2\u00a6\u00a4\3\2\2\2\u00a6\u00a7\3\2\2\2\u00a7"+
		"\u00af\3\2\2\2\u00a8\u00aa\7\60\2\2\u00a9\u00ab\5\t\5\2\u00aa\u00a9\3"+
		"\2\2\2\u00ab\u00ac\3\2\2\2\u00ac\u00aa\3\2\2\2\u00ac\u00ad\3\2\2\2\u00ad"+
		"\u00af\3\2\2\2\u00ae\u009e\3\2\2\2\u00ae\u00a8\3\2\2\2\u00af\22\3\2\2"+
		"\2\u00b0\u00b4\7$\2\2\u00b1\u00b3\n\6\2\2\u00b2\u00b1\3\2\2\2\u00b3\u00b6"+
		"\3\2\2\2\u00b4\u00b2\3\2\2\2\u00b4\u00b5\3\2\2\2\u00b5\u00b7\3\2\2\2\u00b6"+
		"\u00b4\3\2\2\2\u00b7\u00b8\7$\2\2\u00b8\24\3\2\2\2\u00b9\u00bb\t\7\2\2"+
		"\u00ba\u00b9\3\2\2\2\u00bb\u00bc\3\2\2\2\u00bc\u00ba\3\2\2\2\u00bc\u00bd"+
		"\3\2\2\2\u00bd\u00be\3\2\2\2\u00be\u00bf\b\13\2\2\u00bf\26\3\2\2\2\20"+
		"\2t\177\u0082\u008c\u0093\u0095\u009b\u00a0\u00a6\u00ac\u00ae\u00b4\u00bc"+
		"\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}