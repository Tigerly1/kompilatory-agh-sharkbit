
// Generated from sharkbit.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "sharkbitParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by sharkbitParser.
 */
class  sharkbitListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(sharkbitParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(sharkbitParser::ProgramContext *ctx) = 0;

  virtual void enterDeclList(sharkbitParser::DeclListContext *ctx) = 0;
  virtual void exitDeclList(sharkbitParser::DeclListContext *ctx) = 0;

  virtual void enterDecl(sharkbitParser::DeclContext *ctx) = 0;
  virtual void exitDecl(sharkbitParser::DeclContext *ctx) = 0;

  virtual void enterVarDecl(sharkbitParser::VarDeclContext *ctx) = 0;
  virtual void exitVarDecl(sharkbitParser::VarDeclContext *ctx) = 0;

  virtual void enterVarDeclInit(sharkbitParser::VarDeclInitContext *ctx) = 0;
  virtual void exitVarDeclInit(sharkbitParser::VarDeclInitContext *ctx) = 0;

  virtual void enterVarDeclId(sharkbitParser::VarDeclIdContext *ctx) = 0;
  virtual void exitVarDeclId(sharkbitParser::VarDeclIdContext *ctx) = 0;

  virtual void enterCoutDecl(sharkbitParser::CoutDeclContext *ctx) = 0;
  virtual void exitCoutDecl(sharkbitParser::CoutDeclContext *ctx) = 0;

  virtual void enterConstSpec(sharkbitParser::ConstSpecContext *ctx) = 0;
  virtual void exitConstSpec(sharkbitParser::ConstSpecContext *ctx) = 0;

  virtual void enterTypeSpec(sharkbitParser::TypeSpecContext *ctx) = 0;
  virtual void exitTypeSpec(sharkbitParser::TypeSpecContext *ctx) = 0;

  virtual void enterList(sharkbitParser::ListContext *ctx) = 0;
  virtual void exitList(sharkbitParser::ListContext *ctx) = 0;

  virtual void enterTypeDec(sharkbitParser::TypeDecContext *ctx) = 0;
  virtual void exitTypeDec(sharkbitParser::TypeDecContext *ctx) = 0;

  virtual void enterPointerDec(sharkbitParser::PointerDecContext *ctx) = 0;
  virtual void exitPointerDec(sharkbitParser::PointerDecContext *ctx) = 0;

  virtual void enterFunDecl(sharkbitParser::FunDeclContext *ctx) = 0;
  virtual void exitFunDecl(sharkbitParser::FunDeclContext *ctx) = 0;

  virtual void enterParms(sharkbitParser::ParmsContext *ctx) = 0;
  virtual void exitParms(sharkbitParser::ParmsContext *ctx) = 0;

  virtual void enterParmList(sharkbitParser::ParmListContext *ctx) = 0;
  virtual void exitParmList(sharkbitParser::ParmListContext *ctx) = 0;

  virtual void enterParmTypeList(sharkbitParser::ParmTypeListContext *ctx) = 0;
  virtual void exitParmTypeList(sharkbitParser::ParmTypeListContext *ctx) = 0;

  virtual void enterParmIdList(sharkbitParser::ParmIdListContext *ctx) = 0;
  virtual void exitParmIdList(sharkbitParser::ParmIdListContext *ctx) = 0;

  virtual void enterParmId(sharkbitParser::ParmIdContext *ctx) = 0;
  virtual void exitParmId(sharkbitParser::ParmIdContext *ctx) = 0;

  virtual void enterStmt(sharkbitParser::StmtContext *ctx) = 0;
  virtual void exitStmt(sharkbitParser::StmtContext *ctx) = 0;

  virtual void enterExpStmt(sharkbitParser::ExpStmtContext *ctx) = 0;
  virtual void exitExpStmt(sharkbitParser::ExpStmtContext *ctx) = 0;

  virtual void enterCompoundStmt(sharkbitParser::CompoundStmtContext *ctx) = 0;
  virtual void exitCompoundStmt(sharkbitParser::CompoundStmtContext *ctx) = 0;

  virtual void enterStmtList(sharkbitParser::StmtListContext *ctx) = 0;
  virtual void exitStmtList(sharkbitParser::StmtListContext *ctx) = 0;

  virtual void enterSelectStmt(sharkbitParser::SelectStmtContext *ctx) = 0;
  virtual void exitSelectStmt(sharkbitParser::SelectStmtContext *ctx) = 0;

  virtual void enterIterStmt(sharkbitParser::IterStmtContext *ctx) = 0;
  virtual void exitIterStmt(sharkbitParser::IterStmtContext *ctx) = 0;

  virtual void enterIterRange(sharkbitParser::IterRangeContext *ctx) = 0;
  virtual void exitIterRange(sharkbitParser::IterRangeContext *ctx) = 0;

  virtual void enterReturnStmt(sharkbitParser::ReturnStmtContext *ctx) = 0;
  virtual void exitReturnStmt(sharkbitParser::ReturnStmtContext *ctx) = 0;

  virtual void enterBreakStmt(sharkbitParser::BreakStmtContext *ctx) = 0;
  virtual void exitBreakStmt(sharkbitParser::BreakStmtContext *ctx) = 0;

  virtual void enterSimpleExp(sharkbitParser::SimpleExpContext *ctx) = 0;
  virtual void exitSimpleExp(sharkbitParser::SimpleExpContext *ctx) = 0;

  virtual void enterLogicalExp(sharkbitParser::LogicalExpContext *ctx) = 0;
  virtual void exitLogicalExp(sharkbitParser::LogicalExpContext *ctx) = 0;

  virtual void enterUnaryRelExp(sharkbitParser::UnaryRelExpContext *ctx) = 0;
  virtual void exitUnaryRelExp(sharkbitParser::UnaryRelExpContext *ctx) = 0;

  virtual void enterRelExp(sharkbitParser::RelExpContext *ctx) = 0;
  virtual void exitRelExp(sharkbitParser::RelExpContext *ctx) = 0;

  virtual void enterCompop(sharkbitParser::CompopContext *ctx) = 0;
  virtual void exitCompop(sharkbitParser::CompopContext *ctx) = 0;

  virtual void enterMathExp(sharkbitParser::MathExpContext *ctx) = 0;
  virtual void exitMathExp(sharkbitParser::MathExpContext *ctx) = 0;

  virtual void enterMathOp(sharkbitParser::MathOpContext *ctx) = 0;
  virtual void exitMathOp(sharkbitParser::MathOpContext *ctx) = 0;

  virtual void enterFactor(sharkbitParser::FactorContext *ctx) = 0;
  virtual void exitFactor(sharkbitParser::FactorContext *ctx) = 0;

  virtual void enterMutable(sharkbitParser::MutableContext *ctx) = 0;
  virtual void exitMutable(sharkbitParser::MutableContext *ctx) = 0;

  virtual void enterImmutable(sharkbitParser::ImmutableContext *ctx) = 0;
  virtual void exitImmutable(sharkbitParser::ImmutableContext *ctx) = 0;

  virtual void enterCall(sharkbitParser::CallContext *ctx) = 0;
  virtual void exitCall(sharkbitParser::CallContext *ctx) = 0;

  virtual void enterArgs(sharkbitParser::ArgsContext *ctx) = 0;
  virtual void exitArgs(sharkbitParser::ArgsContext *ctx) = 0;

  virtual void enterArgList(sharkbitParser::ArgListContext *ctx) = 0;
  virtual void exitArgList(sharkbitParser::ArgListContext *ctx) = 0;

  virtual void enterConstant(sharkbitParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(sharkbitParser::ConstantContext *ctx) = 0;


};

