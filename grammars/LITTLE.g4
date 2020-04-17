// Grammar by Axel Ward, Ahmed Naji, and Jacob Ziehli

// Define grammar called LITTLE
grammar LITTLE;
// Program definitions
program  : PRG_KEYWORD id BEG_KEYWORD pgm_body END_KEYWORD EOF; //LHS & RHS fulfilled by DeclNodes.ProgramNode java class
id       : IDENTIFIER ;                                         //Fulfilled by DeclNodes.ProgramNode.super.Value for class id
pgm_body : decl func_declarations ;                             //LHS & RHS fulfilled by DeclNodes.ConcreteDeclNode && DeclNodes.MultiFuncDeclNode && DeclNodes.ProgramBodyNode java classes
decl     : string_decl decl | var_decl decl | ;                 //LHS Fulfilled by DeclNodes.ConcreteDeclNode java class (RHS incomplete)

// Global string declaration
string_decl : STR_KEYWORD id ASSIGN_OP str SEMICOLON; 
str         : STRINGLITERAL ;                       

// Variable declaration
var_decl : var_type id_list SEMICOLON;              //LHS & RHS fulfilled by DeclNodes.ParametersNode && DeclNodes.VarDeclNode java classes
var_type : INT_KEYWORD | FLT_KEYWORD ;
any_type : var_type | VOID_KEYWORD ;
id_list  : id id_tail ;                             //lines 19 & 20 fullfilled by simple string linkedLists within their would-be parent Nodes. 
id_tail  : COMMA_OP id id_tail | ;                  //(kinda cheating the dev process :P )

// Function Paramater List
param_decl_list   : param_decl param_decl_tail | ;           //LHS fulfilled by ParamtersNode RHS fulfilled by inheriting from DeclNodes.ConcreteDeclNode to DeclNodes.VarDeclNode
param_decl        : var_type id ;
param_decl_tail   : COMMA_OP param_decl param_decl_tail | ;

// Function Declarations
func_declarations : func_decl func_declarations | ;                                 //LHS & RHS Fulfilled by DeclNodes.MultiFuncDeclNode && FuncDeclNde java classes
func_decl         : FUNC_KEYWORD any_type id OPEN_OP param_decl_list CLOSE_OP BEG_KEYWORD func_body END_KEYWORD ;
func_body         : decl stmt_list ;

// Statement List
stmt_list         : stmt stmt_list | ;
stmt              : base_stmt | if_stmt | while_stmt ;
base_stmt         : assign_stmt | read_stmt | write_stmt | return_stmt ;

// Basic Statements
assign_stmt       : assign_expr SEMICOLON;
assign_expr       : id ASSIGN_OP expr ;
read_stmt         : READ_KEYWORD OPEN_OP id_list CLOSE_OP SEMICOLON;
write_stmt        : WRITE_KEYWORD OPEN_OP id_list CLOSE_OP SEMICOLON;
return_stmt       : RETN_KEYWORD expr SEMICOLON;

// Expressions
expr              : expr_prefix factor ;
expr_prefix       : expr_prefix factor addop | ;
factor            : factor_prefix postfix_expr ;
factor_prefix     : factor_prefix postfix_expr mulop | ;
postfix_expr      : primary | call_expr ;
call_expr         : id OPEN_OP expr_list CLOSE_OP ;
expr_list         : expr expr_list_tail | ;
expr_list_tail    : COMMA_OP expr expr_list_tail | ;
primary           : OPEN_OP expr CLOSE_OP | id | INTLITERAL | FLOATLITERAL ;
addop             : PLUS_OP | SUB_OP;
mulop             : MULT_OP | DIV_OP;

// Complex Statements and Condition
if_stmt           : IF_KEYWORD OPEN_OP cond CLOSE_OP decl stmt_list else_part ENDIF_KEYWORD ;
else_part         : ELSE_KEYWORD decl stmt_list | ;
cond              : expr compop expr ;
compop            : EQ_OP | LESS_OP | GREAT_OP | NOTEQ_OP | LESSEQ_OP | GREATEQ_OP ;

// While statements
while_stmt       : WHILE_KEYWORD OPEN_OP cond CLOSE_OP decl stmt_list ENDWHILE_KEYWORD ;

//---------------------------------------
// Lexer Rules
PRG_KEYWORD      : 'PROGRAM';
BEG_KEYWORD      : 'BEGIN';
END_KEYWORD      : 'END';
FUNC_KEYWORD     : 'FUNCTION';
READ_KEYWORD     : 'READ';
WRITE_KEYWORD    : 'WRITE';
IF_KEYWORD       : 'IF';
ELSE_KEYWORD     : 'ELSE';
ENDIF_KEYWORD    : 'ENDIF';
WHILE_KEYWORD    : 'WHILE';
ENDWHILE_KEYWORD : 'ENDWHILE';
CONT_KEYWORD     : 'CONTINUE';
BRK_KEYWORD      : 'BREAK';
RETN_KEYWORD     : 'RETURN';
INT_KEYWORD      : 'INT';
VOID_KEYWORD     : 'VOID';
STR_KEYWORD      : 'STRING';
FLT_KEYWORD      : 'FLOAT' ;

PLUS_OP    : '+';
MULT_OP    : '*';
DIV_OP     : '/';
SUB_OP     : '-';
ASSIGN_OP  : ':=';
OPEN_OP    : '(';
CLOSE_OP   : ')';
COMMA_OP   : ',';
EQ_OP      :  '=';
LESS_OP    : '<';
GREAT_OP   : '>';
NOTEQ_OP   : '!=';
LESSEQ_OP  : '<=';
GREATEQ_OP : '>=';
SEMICOLON  : ';';

// Identifier definitions
fragment LETTER        : [a-z] | [A-Z] ;
fragment DIGIT         : [0-9] ;

COMMENT       : '--' (~[\n])+ -> skip;

IDENTIFIER    : LETTER (LETTER | DIGIT)* ;
INTLITERAL    : DIGIT+ ;
FLOATLITERAL  : (DIGIT+ '.' DIGIT+) | ('.' DIGIT+) ;
STRINGLITERAL : '"' (~["])* '"' ;

WS : [ \n\t\r]+ -> skip;