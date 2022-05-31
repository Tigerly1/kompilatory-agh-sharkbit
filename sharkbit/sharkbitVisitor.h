
// Generated from sharkbit.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "sharkbitParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by sharkbitParser.
 */
class  sharkbitVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by sharkbitParser.
   */
    virtual antlrcpp::Any visitProgram(sharkbitParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitDeclList(sharkbitParser::DeclListContext *context) = 0;

    virtual antlrcpp::Any visitDecl(sharkbitParser::DeclContext *context) = 0;

    virtual antlrcpp::Any visitVarDecl(sharkbitParser::VarDeclContext *context) = 0;

    virtual antlrcpp::Any visitVarDeclInit(sharkbitParser::VarDeclInitContext *context) = 0;

    virtual antlrcpp::Any visitVarDeclId(sharkbitParser::VarDeclIdContext *context) = 0;

    virtual antlrcpp::Any visitCoutDecl(sharkbitParser::CoutDeclContext *context) = 0;

    virtual antlrcpp::Any visitConstSpec(sharkbitParser::ConstSpecContext *context) = 0;

    virtual antlrcpp::Any visitTypeSpec(sharkbitParser::TypeSpecContext *context) = 0;

    virtual antlrcpp::Any visitList(sharkbitParser::ListContext *context) = 0;

    virtual antlrcpp::Any visitTypeDec(sharkbitParser::TypeDecContext *context) = 0;

    virtual antlrcpp::Any visitPointerDec(sharkbitParser::PointerDecContext *context) = 0;

    virtual antlrcpp::Any visitFunDecl(sharkbitParser::FunDeclContext *context) = 0;

    virtual antlrcpp::Any visitParms(sharkbitParser::ParmsContext *context) = 0;

    virtual antlrcpp::Any visitParmList(sharkbitParser::ParmListContext *context) = 0;

    virtual antlrcpp::Any visitParmTypeList(sharkbitParser::ParmTypeListContext *context) = 0;

    virtual antlrcpp::Any visitParmIdList(sharkbitParser::ParmIdListContext *context) = 0;

    virtual antlrcpp::Any visitParmId(sharkbitParser::ParmIdContext *context) = 0;

    virtual antlrcpp::Any visitStmt(sharkbitParser::StmtContext *context) = 0;

    virtual antlrcpp::Any visitExpStmt(sharkbitParser::ExpStmtContext *context) = 0;

    virtual antlrcpp::Any visitCompoundStmt(sharkbitParser::CompoundStmtContext *context) = 0;

    virtual antlrcpp::Any visitStmtList(sharkbitParser::StmtListContext *context) = 0;

    virtual antlrcpp::Any visitSelectStmt(sharkbitParser::SelectStmtContext *context) = 0;

    virtual antlrcpp::Any visitIterStmt(sharkbitParser::IterStmtContext *context) = 0;

    virtual antlrcpp::Any visitIterRange(sharkbitParser::IterRangeContext *context) = 0;

    virtual antlrcpp::Any visitReturnStmt(sharkbitParser::ReturnStmtContext *context) = 0;

    virtual antlrcpp::Any visitBreakStmt(sharkbitParser::BreakStmtContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExp(sharkbitParser::SimpleExpContext *context) = 0;

    virtual antlrcpp::Any visitLogicalExp(sharkbitParser::LogicalExpContext *context) = 0;

    virtual antlrcpp::Any visitUnaryRelExp(sharkbitParser::UnaryRelExpContext *context) = 0;

    virtual antlrcpp::Any visitRelExp(sharkbitParser::RelExpContext *context) = 0;

    virtual antlrcpp::Any visitCompop(sharkbitParser::CompopContext *context) = 0;

    virtual antlrcpp::Any visitMathExp(sharkbitParser::MathExpContext *context) = 0;

    virtual antlrcpp::Any visitMathOp(sharkbitParser::MathOpContext *context) = 0;

    virtual antlrcpp::Any visitFactor(sharkbitParser::FactorContext *context) = 0;

    virtual antlrcpp::Any visitMutable(sharkbitParser::MutableContext *context) = 0;

    virtual antlrcpp::Any visitImmutable(sharkbitParser::ImmutableContext *context) = 0;

    virtual antlrcpp::Any visitCall(sharkbitParser::CallContext *context) = 0;

    virtual antlrcpp::Any visitArgs(sharkbitParser::ArgsContext *context) = 0;

    virtual antlrcpp::Any visitArgList(sharkbitParser::ArgListContext *context) = 0;

    virtual antlrcpp::Any visitConstant(sharkbitParser::ConstantContext *context) = 0;


};

