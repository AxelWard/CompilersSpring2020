// Grammar for Axel Ward, Ahmed Naji, and Jacob Ziehli

// Define grammar called LITTLE
grammar LITTLE;

// Program definitions
program  : KEYWORD id KEYWORD pgm_body KEYWORD EOF;
id       : IDENTIFIER ;
pgm_body : decl func_declarations ;
decl     : string_decl decl | var_decl decl | ;

// Global string declaration
string_decl : KEYWORD id OPERATOR str OPERATOR;
str         : STRINGLITERAL ;

// Variable declaration
var_decl : var_type id_list OPERATOR;
var_type : KEYWORD | KEYWORD ;
any_type : var_type | KEYWORD ;
id_list  : id id_tail ;
id_tail  : OPERATOR id id_tail | ;

// Function Paramater List
param_decl_list   : param_decl param_decl_tail | ;
param_decl        : var_type id ;
param_decl_tail   : OPERATOR param_decl param_decl_tail | ;

// Function Declarations
func_declarations : func_decl func_declarations | ;
func_decl         : KEYWORD any_type id OPERATOR param_decl_list OPERATOR KEYWORD func_body KEYWORD ;
func_body         : decl stmt_list ;

// Statement List
stmt_list         : stmt stmt_list | ;
stmt              : base_stmt | if_stmt | while_stmt ;
base_stmt         : assign_stmt | read_stmt | write_stmt | return_stmt ;

// Basic Statements
assign_stmt       : assign_expr OPERATOR;
assign_expr       : id OPERATOR expr ;
read_stmt         : KEYWORD OPERATOR id_list OPERATOR OPERATOR;
write_stmt        : KEYWORD OPERATOR id_list OPERATOR OPERATOR;
return_stmt       : KEYWORD expr OPERATOR;

// Expressions
expr              : expr_prefix factor ;
expr_prefix       : expr_prefix factor addop | ;
factor            : factor_prefix postfix_expr ;
factor_prefix     : factor_prefix postfix_expr mulop | ;
postfix_expr      : primary | call_expr ;
call_expr         : id OPERATOR expr_list OPERATOR ;
expr_list         : expr expr_list_tail | ;
expr_list_tail    : OPERATOR expr expr_list_tail | ;
primary           : OPERATOR expr OPERATOR | id | INTLITERAL | FLOATLITERAL ;
addop             : OPERATOR ;
mulop             : OPERATOR ;

// Complex Statements and Condition
if_stmt           : KEYWORD OPERATOR cond OPERATOR decl stmt_list else_part KEYWORD ;
else_part         : KEYWORD decl stmt_list | ;
cond              : expr compop expr ;
compop            : OPERATOR ;

// While statements
while_stmt       : KEYWORD OPERATOR cond OPERATOR decl stmt_list KEYWORD ;

//---------------------------------------

// Lexer Rules
KEYWORD  : 'PROGRAM' | 'BEGIN' | 'END' | 'FUNCTION' | 'READ' | 'WRITE' |
           'IF' | 'ELSE' | 'ENDIF' | 'WHILE' | 'ENDWHILE' | 'CONTINUE' | 'BREAK' |
           'RETURN' | 'INT' | 'VOID' | 'STRING' | 'FLOAT' ;
OPERATOR : [;)(+,*/<>=-] | ':=' | '!=' | '<=' | '>=';

// Identifier definitions
fragment LETTER        : [a-z] | [A-Z] ;
fragment DIGIT         : [0-9] ;

COMMENT       : '--' (~[\n])+ -> skip;

IDENTIFIER    : LETTER (LETTER | DIGIT)* ;
INTLITERAL    : DIGIT+ ;
FLOATLITERAL  : (DIGIT+ '.' DIGIT+) | ('.' DIGIT+) ;
STRINGLITERAL : '"' (~["])* '"' ;

WS : [ \n\t\r]+ -> skip;