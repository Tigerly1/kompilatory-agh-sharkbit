
// Generated from sharkbit.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "sharkbitListener.h"


/**
 * This class provides an empty implementation of sharkbitListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  sharkbitBaseListener : public sharkbitListener {
public:

  virtual void enterProgram(sharkbitParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(sharkbitParser::ProgramContext * /*ctx*/) override { }

  virtual void enterDeclList(sharkbitParser::DeclListContext * /*ctx*/) override { }
  virtual void exitDeclList(sharkbitParser::DeclListContext * /*ctx*/) override { }

  virtual void enterDecl(sharkbitParser::DeclContext * /*ctx*/) override { }
  virtual void exitDecl(sharkbitParser::DeclContext * /*ctx*/) override { }

  virtual void enterVarDecl(sharkbitParser::VarDeclContext * /*ctx*/) override { }
  virtual void exitVarDecl(sharkbitParser::VarDeclContext * /*ctx*/) override { }

  virtual void enterVarDeclInit(sharkbitParser::VarDeclInitContext * /*ctx*/) override { }
  virtual void exitVarDeclInit(sharkbitParser::VarDeclInitContext * /*ctx*/) override { }

  virtual void enterVarDeclId(sharkbitParser::VarDeclIdContext * /*ctx*/) override { }
  virtual void exitVarDeclId(sharkbitParser::VarDeclIdContext * /*ctx*/) override { }

  virtual void enterCoutDecl(sharkbitParser::CoutDeclContext * /*ctx*/) override { }
  virtual void exitCoutDecl(sharkbitParser::CoutDeclContext * /*ctx*/) override { }

  virtual void enterConstSpec(sharkbitParser::ConstSpecContext * /*ctx*/) override { }
  virtual void exitConstSpec(sharkbitParser::ConstSpecContext * /*ctx*/) override { }

  virtual void enterTypeSpec(sharkbitParser::TypeSpecContext * /*ctx*/) override { }
  virtual void exitTypeSpec(sharkbitParser::TypeSpecContext * /*ctx*/) override { }

  virtual void enterList(sharkbitParser::ListContext * /*ctx*/) override { }
  virtual void exitList(sharkbitParser::ListContext * /*ctx*/) override { }

  virtual void enterTypeDec(sharkbitParser::TypeDecContext * /*ctx*/) override { }
  virtual void exitTypeDec(sharkbitParser::TypeDecContext * /*ctx*/) override { }

  virtual void enterPointerDec(sharkbitParser::PointerDecContext * /*ctx*/) override { }
  virtual void exitPointerDec(sharkbitParser::PointerDecContext * /*ctx*/) override { }

  virtual void enterFunDecl(sharkbitParser::FunDeclContext * /*ctx*/) override { }
  virtual void exitFunDecl(sharkbitParser::FunDeclContext * /*ctx*/) override { }

  virtual void enterParms(sharkbitParser::ParmsContext * /*ctx*/) override { }
  virtual void exitParms(sharkbitParser::ParmsContext * /*ctx*/) override { }

  virtual void enterParmList(sharkbitParser::ParmListContext * /*ctx*/) override { }
  virtual void exitParmList(sharkbitParser::ParmListContext * /*ctx*/) override { }

  virtual void enterParmTypeList(sharkbitParser::ParmTypeListContext * /*ctx*/) override { }
  virtual void exitParmTypeList(sharkbitParser::ParmTypeListContext * /*ctx*/) override { }

  virtual void enterParmIdList(sharkbitParser::ParmIdListContext * /*ctx*/) override { }
  virtual void exitParmIdList(sharkbitParser::ParmIdListContext * /*ctx*/) override { }

  virtual void enterParmId(sharkbitParser::ParmIdContext * /*ctx*/) override { }
  virtual void exitParmId(sharkbitParser::ParmIdContext * /*ctx*/) override { }

  virtual void enterStmt(sharkbitParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(sharkbitParser::StmtContext * /*ctx*/) override { }

  virtual void enterExpStmt(sharkbitParser::ExpStmtContext * /*ctx*/) override { }
  virtual void exitExpStmt(sharkbitParser::ExpStmtContext * /*ctx*/) override { }

  virtual void enterCompoundStmt(sharkbitParser::CompoundStmtContext * /*ctx*/) override { }
  virtual void exitCompoundStmt(sharkbitParser::CompoundStmtContext * /*ctx*/) override { }

  virtual void enterStmtList(sharkbitParser::StmtListContext * /*ctx*/) override { }
  virtual void exitStmtList(sharkbitParser::StmtListContext * /*ctx*/) override { }

  virtual void enterSelectStmt(sharkbitParser::SelectStmtContext * /*ctx*/) override { }
  virtual void exitSelectStmt(sharkbitParser::SelectStmtContext * /*ctx*/) override { }

  virtual void enterIterStmt(sharkbitParser::IterStmtContext * /*ctx*/) override { }
  virtual void exitIterStmt(sharkbitParser::IterStmtContext * /*ctx*/) override { }

  virtual void enterIterRange(sharkbitParser::IterRangeContext * /*ctx*/) override { }
  virtual void exitIterRange(sharkbitParser::IterRangeContext * /*ctx*/) override { }

  virtual void enterReturnStmt(sharkbitParser::ReturnStmtContext * /*ctx*/) override { }
  virtual void exitReturnStmt(sharkbitParser::ReturnStmtContext * /*ctx*/) override { }

  virtual void enterBreakStmt(sharkbitParser::BreakStmtContext * /*ctx*/) override { }
  virtual void exitBreakStmt(sharkbitParser::BreakStmtContext * /*ctx*/) override { }

  virtual void enterSimpleExp(sharkbitParser::SimpleExpContext * /*ctx*/) override { }
  virtual void exitSimpleExp(sharkbitParser::SimpleExpContext * /*ctx*/) override { }

  virtual void enterLogicalExp(sharkbitParser::LogicalExpContext * /*ctx*/) override { }
  virtual void exitLogicalExp(sharkbitParser::LogicalExpContext * /*ctx*/) override { }

  virtual void enterUnaryRelExp(sharkbitParser::UnaryRelExpContext * /*ctx*/) override { }
  virtual void exitUnaryRelExp(sharkbitParser::UnaryRelExpContext * /*ctx*/) override { }

  virtual void enterRelExp(sharkbitParser::RelExpContext * /*ctx*/) override { }
  virtual void exitRelExp(sharkbitParser::RelExpContext * /*ctx*/) override { }

  virtual void enterCompop(sharkbitParser::CompopContext * /*ctx*/) override { }
  virtual void exitCompop(sharkbitParser::CompopContext * /*ctx*/) override { }

  virtual void enterMathExp(sharkbitParser::MathExpContext * /*ctx*/) override { }
  virtual void exitMathExp(sharkbitParser::MathExpContext * /*ctx*/) override { }

  virtual void enterMathOp(sharkbitParser::MathOpContext * /*ctx*/) override { }
  virtual void exitMathOp(sharkbitParser::MathOpContext * /*ctx*/) override { }

  virtual void enterFactor(sharkbitParser::FactorContext * /*ctx*/) override { }
  virtual void exitFactor(sharkbitParser::FactorContext * /*ctx*/) override { }

  virtual void enterMutable(sharkbitParser::MutableContext * /*ctx*/) override { }
  virtual void exitMutable(sharkbitParser::MutableContext * /*ctx*/) override { }

  virtual void enterImmutable(sharkbitParser::ImmutableContext * /*ctx*/) override { }
  virtual void exitImmutable(sharkbitParser::ImmutableContext * /*ctx*/) override { }

  virtual void enterCall(sharkbitParser::CallContext * /*ctx*/) override { }
  virtual void exitCall(sharkbitParser::CallContext * /*ctx*/) override { }

  virtual void enterArgs(sharkbitParser::ArgsContext * /*ctx*/) override { }
  virtual void exitArgs(sharkbitParser::ArgsContext * /*ctx*/) override { }

  virtual void enterArgList(sharkbitParser::ArgListContext * /*ctx*/) override { }
  virtual void exitArgList(sharkbitParser::ArgListContext * /*ctx*/) override { }

  virtual void enterConstant(sharkbitParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(sharkbitParser::ConstantContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

