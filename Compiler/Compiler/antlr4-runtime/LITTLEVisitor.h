
// Generated from LITTLE.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "LITTLEParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by LITTLEParser.
 */
class  LITTLEVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by LITTLEParser.
   */
    virtual antlrcpp::Any visitProgram(LITTLEParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitId(LITTLEParser::IdContext *context) = 0;

    virtual antlrcpp::Any visitPgm_body(LITTLEParser::Pgm_bodyContext *context) = 0;

    virtual antlrcpp::Any visitDecl(LITTLEParser::DeclContext *context) = 0;

    virtual antlrcpp::Any visitString_decl(LITTLEParser::String_declContext *context) = 0;

    virtual antlrcpp::Any visitStr(LITTLEParser::StrContext *context) = 0;

    virtual antlrcpp::Any visitVar_decl(LITTLEParser::Var_declContext *context) = 0;

    virtual antlrcpp::Any visitVar_type(LITTLEParser::Var_typeContext *context) = 0;

    virtual antlrcpp::Any visitAny_type(LITTLEParser::Any_typeContext *context) = 0;

    virtual antlrcpp::Any visitId_list(LITTLEParser::Id_listContext *context) = 0;

    virtual antlrcpp::Any visitId_tail(LITTLEParser::Id_tailContext *context) = 0;

    virtual antlrcpp::Any visitParam_decl_list(LITTLEParser::Param_decl_listContext *context) = 0;

    virtual antlrcpp::Any visitParam_decl(LITTLEParser::Param_declContext *context) = 0;

    virtual antlrcpp::Any visitParam_decl_tail(LITTLEParser::Param_decl_tailContext *context) = 0;

    virtual antlrcpp::Any visitFunc_declarations(LITTLEParser::Func_declarationsContext *context) = 0;

    virtual antlrcpp::Any visitFunc_decl(LITTLEParser::Func_declContext *context) = 0;

    virtual antlrcpp::Any visitFunc_body(LITTLEParser::Func_bodyContext *context) = 0;

    virtual antlrcpp::Any visitStmt_list(LITTLEParser::Stmt_listContext *context) = 0;

    virtual antlrcpp::Any visitStmt(LITTLEParser::StmtContext *context) = 0;

    virtual antlrcpp::Any visitBase_stmt(LITTLEParser::Base_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAssign_stmt(LITTLEParser::Assign_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAssign_expr(LITTLEParser::Assign_exprContext *context) = 0;

    virtual antlrcpp::Any visitRead_stmt(LITTLEParser::Read_stmtContext *context) = 0;

    virtual antlrcpp::Any visitWrite_stmt(LITTLEParser::Write_stmtContext *context) = 0;

    virtual antlrcpp::Any visitReturn_stmt(LITTLEParser::Return_stmtContext *context) = 0;

    virtual antlrcpp::Any visitExpr(LITTLEParser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitExpr_prefix(LITTLEParser::Expr_prefixContext *context) = 0;

    virtual antlrcpp::Any visitFactor(LITTLEParser::FactorContext *context) = 0;

    virtual antlrcpp::Any visitFactor_prefix(LITTLEParser::Factor_prefixContext *context) = 0;

    virtual antlrcpp::Any visitPostfix_expr(LITTLEParser::Postfix_exprContext *context) = 0;

    virtual antlrcpp::Any visitCall_expr(LITTLEParser::Call_exprContext *context) = 0;

    virtual antlrcpp::Any visitExpr_list(LITTLEParser::Expr_listContext *context) = 0;

    virtual antlrcpp::Any visitExpr_list_tail(LITTLEParser::Expr_list_tailContext *context) = 0;

    virtual antlrcpp::Any visitPrimary(LITTLEParser::PrimaryContext *context) = 0;

    virtual antlrcpp::Any visitAddop(LITTLEParser::AddopContext *context) = 0;

    virtual antlrcpp::Any visitMulop(LITTLEParser::MulopContext *context) = 0;

    virtual antlrcpp::Any visitIf_stmt(LITTLEParser::If_stmtContext *context) = 0;

    virtual antlrcpp::Any visitElse_part(LITTLEParser::Else_partContext *context) = 0;

    virtual antlrcpp::Any visitCond(LITTLEParser::CondContext *context) = 0;

    virtual antlrcpp::Any visitCompop(LITTLEParser::CompopContext *context) = 0;

    virtual antlrcpp::Any visitWhile_stmt(LITTLEParser::While_stmtContext *context) = 0;


};

