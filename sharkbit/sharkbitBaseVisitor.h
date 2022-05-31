
// Generated from sharkbit.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "sharkbitVisitor.h"


/**
 * This class provides an empty implementation of sharkbitVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  sharkbitBaseVisitor : public sharkbitVisitor {
public:

  virtual antlrcpp::Any visitProgram(sharkbitParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclList(sharkbitParser::DeclListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecl(sharkbitParser::DeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarDecl(sharkbitParser::VarDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarDeclInit(sharkbitParser::VarDeclInitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarDeclId(sharkbitParser::VarDeclIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCoutDecl(sharkbitParser::CoutDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstSpec(sharkbitParser::ConstSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeSpec(sharkbitParser::TypeSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitList(sharkbitParser::ListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeDec(sharkbitParser::TypeDecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPointerDec(sharkbitParser::PointerDecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunDecl(sharkbitParser::FunDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParms(sharkbitParser::ParmsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParmList(sharkbitParser::ParmListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParmTypeList(sharkbitParser::ParmTypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParmIdList(sharkbitParser::ParmIdListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParmId(sharkbitParser::ParmIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt(sharkbitParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpStmt(sharkbitParser::ExpStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompoundStmt(sharkbitParser::CompoundStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtList(sharkbitParser::StmtListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectStmt(sharkbitParser::SelectStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIterStmt(sharkbitParser::IterStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIterRange(sharkbitParser::IterRangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStmt(sharkbitParser::ReturnStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreakStmt(sharkbitParser::BreakStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExp(sharkbitParser::SimpleExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalExp(sharkbitParser::LogicalExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryRelExp(sharkbitParser::UnaryRelExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelExp(sharkbitParser::RelExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompop(sharkbitParser::CompopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMathExp(sharkbitParser::MathExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMathOp(sharkbitParser::MathOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFactor(sharkbitParser::FactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMutable(sharkbitParser::MutableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImmutable(sharkbitParser::ImmutableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall(sharkbitParser::CallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgs(sharkbitParser::ArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgList(sharkbitParser::ArgListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(sharkbitParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }


};

