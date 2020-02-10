
// Generated from LITTLE.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "LITTLEVisitor.h"


/**
 * This class provides an empty implementation of LITTLEVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  LITTLEBaseVisitor : public LITTLEVisitor {
public:

  virtual antlrcpp::Any visitProgram(LITTLEParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitId(LITTLEParser::IdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPgm_body(LITTLEParser::Pgm_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecl(LITTLEParser::DeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString_decl(LITTLEParser::String_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStr(LITTLEParser::StrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar_decl(LITTLEParser::Var_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar_type(LITTLEParser::Var_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAny_type(LITTLEParser::Any_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitId_list(LITTLEParser::Id_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitId_tail(LITTLEParser::Id_tailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParam_decl_list(LITTLEParser::Param_decl_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParam_decl(LITTLEParser::Param_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParam_decl_tail(LITTLEParser::Param_decl_tailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_declarations(LITTLEParser::Func_declarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_decl(LITTLEParser::Func_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_body(LITTLEParser::Func_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt_list(LITTLEParser::Stmt_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt(LITTLEParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBase_stmt(LITTLEParser::Base_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign_stmt(LITTLEParser::Assign_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign_expr(LITTLEParser::Assign_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRead_stmt(LITTLEParser::Read_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWrite_stmt(LITTLEParser::Write_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn_stmt(LITTLEParser::Return_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(LITTLEParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_prefix(LITTLEParser::Expr_prefixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFactor(LITTLEParser::FactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFactor_prefix(LITTLEParser::Factor_prefixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostfix_expr(LITTLEParser::Postfix_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall_expr(LITTLEParser::Call_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_list(LITTLEParser::Expr_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_list_tail(LITTLEParser::Expr_list_tailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimary(LITTLEParser::PrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddop(LITTLEParser::AddopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulop(LITTLEParser::MulopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_stmt(LITTLEParser::If_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElse_part(LITTLEParser::Else_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCond(LITTLEParser::CondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompop(LITTLEParser::CompopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile_stmt(LITTLEParser::While_stmtContext *ctx) override {
    return visitChildren(ctx);
  }


};

