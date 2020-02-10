
// Generated from LITTLE.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  LITTLEParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, IDENTIFIER = 31, INTLITERAL = 32, 
    FLOATLITERAL = 33, STRINGLITERAL = 34, COMMENT = 35
  };

  enum {
    RuleProgram = 0, RuleId = 1, RulePgm_body = 2, RuleDecl = 3, RuleString_decl = 4, 
    RuleStr = 5, RuleVar_decl = 6, RuleVar_type = 7, RuleAny_type = 8, RuleId_list = 9, 
    RuleId_tail = 10, RuleParam_decl_list = 11, RuleParam_decl = 12, RuleParam_decl_tail = 13, 
    RuleFunc_declarations = 14, RuleFunc_decl = 15, RuleFunc_body = 16, 
    RuleStmt_list = 17, RuleStmt = 18, RuleBase_stmt = 19, RuleAssign_stmt = 20, 
    RuleAssign_expr = 21, RuleRead_stmt = 22, RuleWrite_stmt = 23, RuleReturn_stmt = 24, 
    RuleExpr = 25, RuleExpr_prefix = 26, RuleFactor = 27, RuleFactor_prefix = 28, 
    RulePostfix_expr = 29, RuleCall_expr = 30, RuleExpr_list = 31, RuleExpr_list_tail = 32, 
    RulePrimary = 33, RuleAddop = 34, RuleMulop = 35, RuleIf_stmt = 36, 
    RuleElse_part = 37, RuleCond = 38, RuleCompop = 39, RuleWhile_stmt = 40
  };

  LITTLEParser(antlr4::TokenStream *input);
  ~LITTLEParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class IdContext;
  class Pgm_bodyContext;
  class DeclContext;
  class String_declContext;
  class StrContext;
  class Var_declContext;
  class Var_typeContext;
  class Any_typeContext;
  class Id_listContext;
  class Id_tailContext;
  class Param_decl_listContext;
  class Param_declContext;
  class Param_decl_tailContext;
  class Func_declarationsContext;
  class Func_declContext;
  class Func_bodyContext;
  class Stmt_listContext;
  class StmtContext;
  class Base_stmtContext;
  class Assign_stmtContext;
  class Assign_exprContext;
  class Read_stmtContext;
  class Write_stmtContext;
  class Return_stmtContext;
  class ExprContext;
  class Expr_prefixContext;
  class FactorContext;
  class Factor_prefixContext;
  class Postfix_exprContext;
  class Call_exprContext;
  class Expr_listContext;
  class Expr_list_tailContext;
  class PrimaryContext;
  class AddopContext;
  class MulopContext;
  class If_stmtContext;
  class Else_partContext;
  class CondContext;
  class CompopContext;
  class While_stmtContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();
    Pgm_bodyContext *pgm_body();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  IdContext : public antlr4::ParserRuleContext {
  public:
    IdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdContext* id();

  class  Pgm_bodyContext : public antlr4::ParserRuleContext {
  public:
    Pgm_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclContext *decl();
    Func_declarationsContext *func_declarations();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pgm_bodyContext* pgm_body();

  class  DeclContext : public antlr4::ParserRuleContext {
  public:
    DeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    String_declContext *string_decl();
    DeclContext *decl();
    Var_declContext *var_decl();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclContext* decl();

  class  String_declContext : public antlr4::ParserRuleContext {
  public:
    String_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();
    StrContext *str();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  String_declContext* string_decl();

  class  StrContext : public antlr4::ParserRuleContext {
  public:
    StrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRINGLITERAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StrContext* str();

  class  Var_declContext : public antlr4::ParserRuleContext {
  public:
    Var_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_typeContext *var_type();
    Id_listContext *id_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_declContext* var_decl();

  class  Var_typeContext : public antlr4::ParserRuleContext {
  public:
    Var_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_typeContext* var_type();

  class  Any_typeContext : public antlr4::ParserRuleContext {
  public:
    Any_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_typeContext *var_type();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Any_typeContext* any_type();

  class  Id_listContext : public antlr4::ParserRuleContext {
  public:
    Id_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();
    Id_tailContext *id_tail();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Id_listContext* id_list();

  class  Id_tailContext : public antlr4::ParserRuleContext {
  public:
    Id_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();
    Id_tailContext *id_tail();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Id_tailContext* id_tail();

  class  Param_decl_listContext : public antlr4::ParserRuleContext {
  public:
    Param_decl_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Param_declContext *param_decl();
    Param_decl_tailContext *param_decl_tail();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_decl_listContext* param_decl_list();

  class  Param_declContext : public antlr4::ParserRuleContext {
  public:
    Param_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_typeContext *var_type();
    IdContext *id();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_declContext* param_decl();

  class  Param_decl_tailContext : public antlr4::ParserRuleContext {
  public:
    Param_decl_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Param_declContext *param_decl();
    Param_decl_tailContext *param_decl_tail();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_decl_tailContext* param_decl_tail();

  class  Func_declarationsContext : public antlr4::ParserRuleContext {
  public:
    Func_declarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Func_declContext *func_decl();
    Func_declarationsContext *func_declarations();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_declarationsContext* func_declarations();

  class  Func_declContext : public antlr4::ParserRuleContext {
  public:
    Func_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_typeContext *any_type();
    IdContext *id();
    Func_bodyContext *func_body();
    Param_decl_listContext *param_decl_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_declContext* func_decl();

  class  Func_bodyContext : public antlr4::ParserRuleContext {
  public:
    Func_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclContext *decl();
    Stmt_listContext *stmt_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_bodyContext* func_body();

  class  Stmt_listContext : public antlr4::ParserRuleContext {
  public:
    Stmt_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StmtContext *stmt();
    Stmt_listContext *stmt_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Stmt_listContext* stmt_list();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Base_stmtContext *base_stmt();
    If_stmtContext *if_stmt();
    While_stmtContext *while_stmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  Base_stmtContext : public antlr4::ParserRuleContext {
  public:
    Base_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assign_stmtContext *assign_stmt();
    Read_stmtContext *read_stmt();
    Write_stmtContext *write_stmt();
    Return_stmtContext *return_stmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Base_stmtContext* base_stmt();

  class  Assign_stmtContext : public antlr4::ParserRuleContext {
  public:
    Assign_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assign_exprContext *assign_expr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assign_stmtContext* assign_stmt();

  class  Assign_exprContext : public antlr4::ParserRuleContext {
  public:
    Assign_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();
    ExprContext *expr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assign_exprContext* assign_expr();

  class  Read_stmtContext : public antlr4::ParserRuleContext {
  public:
    Read_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_listContext *id_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Read_stmtContext* read_stmt();

  class  Write_stmtContext : public antlr4::ParserRuleContext {
  public:
    Write_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_listContext *id_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Write_stmtContext* write_stmt();

  class  Return_stmtContext : public antlr4::ParserRuleContext {
  public:
    Return_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_stmtContext* return_stmt();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expr_prefixContext *expr_prefix();
    FactorContext *factor();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();

  class  Expr_prefixContext : public antlr4::ParserRuleContext {
  public:
    Expr_prefixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expr_prefixContext *expr_prefix();
    FactorContext *factor();
    AddopContext *addop();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_prefixContext* expr_prefix();
  Expr_prefixContext* expr_prefix(int precedence);
  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Factor_prefixContext *factor_prefix();
    Postfix_exprContext *postfix_expr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FactorContext* factor();

  class  Factor_prefixContext : public antlr4::ParserRuleContext {
  public:
    Factor_prefixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Factor_prefixContext *factor_prefix();
    Postfix_exprContext *postfix_expr();
    MulopContext *mulop();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Factor_prefixContext* factor_prefix();
  Factor_prefixContext* factor_prefix(int precedence);
  class  Postfix_exprContext : public antlr4::ParserRuleContext {
  public:
    Postfix_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryContext *primary();
    Call_exprContext *call_expr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Postfix_exprContext* postfix_expr();

  class  Call_exprContext : public antlr4::ParserRuleContext {
  public:
    Call_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdContext *id();
    Expr_listContext *expr_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Call_exprContext* call_expr();

  class  Expr_listContext : public antlr4::ParserRuleContext {
  public:
    Expr_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    Expr_list_tailContext *expr_list_tail();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_listContext* expr_list();

  class  Expr_list_tailContext : public antlr4::ParserRuleContext {
  public:
    Expr_list_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    Expr_list_tailContext *expr_list_tail();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_list_tailContext* expr_list_tail();

  class  PrimaryContext : public antlr4::ParserRuleContext {
  public:
    PrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    IdContext *id();
    antlr4::tree::TerminalNode *INTLITERAL();
    antlr4::tree::TerminalNode *FLOATLITERAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryContext* primary();

  class  AddopContext : public antlr4::ParserRuleContext {
  public:
    AddopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddopContext* addop();

  class  MulopContext : public antlr4::ParserRuleContext {
  public:
    MulopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MulopContext* mulop();

  class  If_stmtContext : public antlr4::ParserRuleContext {
  public:
    If_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CondContext *cond();
    DeclContext *decl();
    Stmt_listContext *stmt_list();
    Else_partContext *else_part();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_stmtContext* if_stmt();

  class  Else_partContext : public antlr4::ParserRuleContext {
  public:
    Else_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclContext *decl();
    Stmt_listContext *stmt_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Else_partContext* else_part();

  class  CondContext : public antlr4::ParserRuleContext {
  public:
    CondContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    CompopContext *compop();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CondContext* cond();

  class  CompopContext : public antlr4::ParserRuleContext {
  public:
    CompopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompopContext* compop();

  class  While_stmtContext : public antlr4::ParserRuleContext {
  public:
    While_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CondContext *cond();
    DeclContext *decl();
    Stmt_listContext *stmt_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_stmtContext* while_stmt();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expr_prefixSempred(Expr_prefixContext *_localctx, size_t predicateIndex);
  bool factor_prefixSempred(Factor_prefixContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

