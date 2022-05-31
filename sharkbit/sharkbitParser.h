
// Generated from sharkbit.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"




class  sharkbitParser : public antlr4::Parser {
public:
  enum {
    DOUBLE = 1, INT = 2, STRING = 3, BREAK = 4, IF = 5, ELSE = 6, RETURN = 7, 
    CHAR = 8, CONST = 9, FOR = 10, VOID = 11, WHILE = 12, LIST = 13, BOOL = 14, 
    IP = 15, ADDRESS = 16, FUNCTION = 17, FILE = 18, PROTOCOL = 19, POINTER = 20, 
    AND = 21, TRUE = 22, FALSE = 23, ADD = 24, SUBSTRACTION = 25, MULTIPLY = 26, 
    DIVIDE = 27, MOD = 28, ASSIGN = 29, COMMENT = 30, COUT = 31, QUOTE = 32, 
    DOUBLEQUOTE = 33, LS = 34, RS = 35, LC = 36, RC = 37, LR = 38, RR = 39, 
    POINTED_VALUE = 40, POINTER_ADDRESS = 41, SEMICOLON = 42, DECYPHER = 43, 
    FIND_ADD = 44, GET_PROC = 45, SEND_PACKET = 46, NULL = 47, LESS = 48, 
    GREATER = 49, LEQ = 50, GEQ = 51, EQ = 52, DIFF = 53, COMMA = 54, DOT = 55, 
    NOT = 56, TO = 57, BY = 58, IN = 59, ID = 60, STRING_CONST = 61, DOUBNUMBER = 62, 
    INTNUMBER = 63, CHAR_CONST = 64, PORT = 65, WS = 66
  };

  enum {
    RuleProgram = 0, RuleDeclList = 1, RuleDecl = 2, RuleVarDecl = 3, RuleVarDeclInit = 4, 
    RuleVarDeclId = 5, RuleCoutDecl = 6, RuleConstSpec = 7, RuleTypeSpec = 8, 
    RuleList = 9, RuleTypeDec = 10, RulePointerDec = 11, RuleFunDecl = 12, 
    RuleParms = 13, RuleParmList = 14, RuleParmTypeList = 15, RuleParmIdList = 16, 
    RuleParmId = 17, RuleStmt = 18, RuleExpStmt = 19, RuleCompoundStmt = 20, 
    RuleStmtList = 21, RuleSelectStmt = 22, RuleIterStmt = 23, RuleIterRange = 24, 
    RuleReturnStmt = 25, RuleBreakStmt = 26, RuleSimpleExp = 27, RuleLogicalExp = 28, 
    RuleUnaryRelExp = 29, RuleRelExp = 30, RuleCompop = 31, RuleMathExp = 32, 
    RuleMathOp = 33, RuleFactor = 34, RuleMutable = 35, RuleImmutable = 36, 
    RuleCall = 37, RuleArgs = 38, RuleArgList = 39, RuleConstant = 40
  };

  sharkbitParser(antlr4::TokenStream *input);
  ~sharkbitParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class DeclListContext;
  class DeclContext;
  class VarDeclContext;
  class VarDeclInitContext;
  class VarDeclIdContext;
  class CoutDeclContext;
  class ConstSpecContext;
  class TypeSpecContext;
  class ListContext;
  class TypeDecContext;
  class PointerDecContext;
  class FunDeclContext;
  class ParmsContext;
  class ParmListContext;
  class ParmTypeListContext;
  class ParmIdListContext;
  class ParmIdContext;
  class StmtContext;
  class ExpStmtContext;
  class CompoundStmtContext;
  class StmtListContext;
  class SelectStmtContext;
  class IterStmtContext;
  class IterRangeContext;
  class ReturnStmtContext;
  class BreakStmtContext;
  class SimpleExpContext;
  class LogicalExpContext;
  class UnaryRelExpContext;
  class RelExpContext;
  class CompopContext;
  class MathExpContext;
  class MathOpContext;
  class FactorContext;
  class MutableContext;
  class ImmutableContext;
  class CallContext;
  class ArgsContext;
  class ArgListContext;
  class ConstantContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclListContext *declList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  DeclListContext : public antlr4::ParserRuleContext {
  public:
    DeclListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclContext *decl();
    DeclListContext *declList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclListContext* declList();
  DeclListContext* declList(int precedence);
  class  DeclContext : public antlr4::ParserRuleContext {
  public:
    DeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CoutDeclContext *coutDecl();
    VarDeclContext *varDecl();
    FunDeclContext *funDecl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclContext* decl();

  class  VarDeclContext : public antlr4::ParserRuleContext {
  public:
    VarDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstSpecContext *constSpec();
    TypeDecContext *typeDec();
    VarDeclInitContext *varDeclInit();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarDeclContext* varDecl();

  class  VarDeclInitContext : public antlr4::ParserRuleContext {
  public:
    VarDeclInitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarDeclIdContext *varDeclId();
    antlr4::tree::TerminalNode *ASSIGN();
    MathExpContext *mathExp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarDeclInitContext* varDeclInit();

  class  VarDeclIdContext : public antlr4::ParserRuleContext {
  public:
    VarDeclIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LS();
    antlr4::tree::TerminalNode *RS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarDeclIdContext* varDeclId();

  class  CoutDeclContext : public antlr4::ParserRuleContext {
  public:
    CoutDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COUT();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *SEMICOLON();
    MathExpContext *mathExp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CoutDeclContext* coutDecl();

  class  ConstSpecContext : public antlr4::ParserRuleContext {
  public:
    ConstSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstSpecContext* constSpec();

  class  TypeSpecContext : public antlr4::ParserRuleContext {
  public:
    TypeSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *IP();
    antlr4::tree::TerminalNode *PROTOCOL();
    antlr4::tree::TerminalNode *ADDRESS();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *PORT();
    antlr4::tree::TerminalNode *CHAR();
    ListContext *list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeSpecContext* typeSpec();

  class  ListContext : public antlr4::ParserRuleContext {
  public:
    ListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *LESS();
    TypeSpecContext *typeSpec();
    antlr4::tree::TerminalNode *GREATER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ListContext* list();

  class  TypeDecContext : public antlr4::ParserRuleContext {
  public:
    TypeDecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecContext *typeSpec();
    PointerDecContext *pointerDec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDecContext* typeDec();

  class  PointerDecContext : public antlr4::ParserRuleContext {
  public:
    PointerDecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POINTER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointerDecContext* pointerDec();

  class  FunDeclContext : public antlr4::ParserRuleContext {
  public:
    FunDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *ID();
    TypeDecContext *typeDec();
    antlr4::tree::TerminalNode *LR();
    ParmsContext *parms();
    antlr4::tree::TerminalNode *RR();
    StmtContext *stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunDeclContext* funDecl();

  class  ParmsContext : public antlr4::ParserRuleContext {
  public:
    ParmsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParmListContext *parmList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParmsContext* parms();

  class  ParmListContext : public antlr4::ParserRuleContext {
  public:
    ParmListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParmTypeListContext *parmTypeList();
    ParmListContext *parmList();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParmListContext* parmList();
  ParmListContext* parmList(int precedence);
  class  ParmTypeListContext : public antlr4::ParserRuleContext {
  public:
    ParmTypeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeDecContext *typeDec();
    ParmIdListContext *parmIdList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParmTypeListContext* parmTypeList();

  class  ParmIdListContext : public antlr4::ParserRuleContext {
  public:
    ParmIdListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParmIdContext *parmId();
    ParmIdListContext *parmIdList();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParmIdListContext* parmIdList();
  ParmIdListContext* parmIdList(int precedence);
  class  ParmIdContext : public antlr4::ParserRuleContext {
  public:
    ParmIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LS();
    antlr4::tree::TerminalNode *RS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParmIdContext* parmId();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpStmtContext *expStmt();
    CompoundStmtContext *compoundStmt();
    SelectStmtContext *selectStmt();
    IterStmtContext *iterStmt();
    ReturnStmtContext *returnStmt();
    BreakStmtContext *breakStmt();
    VarDeclContext *varDecl();
    CoutDeclContext *coutDecl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  ExpStmtContext : public antlr4::ParserRuleContext {
  public:
    ExpStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleExpContext *simpleExp();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpStmtContext* expStmt();

  class  CompoundStmtContext : public antlr4::ParserRuleContext {
  public:
    CompoundStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LC();
    StmtListContext *stmtList();
    antlr4::tree::TerminalNode *RC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundStmtContext* compoundStmt();

  class  StmtListContext : public antlr4::ParserRuleContext {
  public:
    StmtListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StmtListContext *stmtList();
    StmtContext *stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtListContext* stmtList();
  StmtListContext* stmtList(int precedence);
  class  SelectStmtContext : public antlr4::ParserRuleContext {
  public:
    SelectStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LR();
    SimpleExpContext *simpleExp();
    antlr4::tree::TerminalNode *RR();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectStmtContext* selectStmt();

  class  IterStmtContext : public antlr4::ParserRuleContext {
  public:
    IterStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *LR();
    SimpleExpContext *simpleExp();
    antlr4::tree::TerminalNode *RR();
    StmtContext *stmt();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *IN();
    IterRangeContext *iterRange();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IterStmtContext* iterStmt();

  class  IterRangeContext : public antlr4::ParserRuleContext {
  public:
    IterRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SimpleExpContext *> simpleExp();
    SimpleExpContext* simpleExp(size_t i);
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *BY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IterRangeContext* iterRange();

  class  ReturnStmtContext : public antlr4::ParserRuleContext {
  public:
    ReturnStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *SEMICOLON();
    SimpleExpContext *simpleExp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStmtContext* returnStmt();

  class  BreakStmtContext : public antlr4::ParserRuleContext {
  public:
    BreakStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BreakStmtContext* breakStmt();

  class  SimpleExpContext : public antlr4::ParserRuleContext {
  public:
    SimpleExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MathExpContext *mathExp();
    LogicalExpContext *logicalExp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleExpContext* simpleExp();

  class  LogicalExpContext : public antlr4::ParserRuleContext {
  public:
    LogicalExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryRelExpContext *unaryRelExp();
    LogicalExpContext *logicalExp();
    antlr4::tree::TerminalNode *AND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalExpContext* logicalExp();
  LogicalExpContext* logicalExp(int precedence);
  class  UnaryRelExpContext : public antlr4::ParserRuleContext {
  public:
    UnaryRelExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    UnaryRelExpContext *unaryRelExp();
    RelExpContext *relExp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryRelExpContext* unaryRelExp();

  class  RelExpContext : public antlr4::ParserRuleContext {
  public:
    RelExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MathExpContext *> mathExp();
    MathExpContext* mathExp(size_t i);
    CompopContext *compop();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelExpContext* relExp();

  class  CompopContext : public antlr4::ParserRuleContext {
  public:
    CompopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *GREATER();
    antlr4::tree::TerminalNode *LEQ();
    antlr4::tree::TerminalNode *GEQ();
    antlr4::tree::TerminalNode *DIFF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompopContext* compop();

  class  MathExpContext : public antlr4::ParserRuleContext {
  public:
    MathExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FactorContext *factor();
    MathOpContext *mathOp();
    MathExpContext *mathExp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MathExpContext* mathExp();

  class  MathOpContext : public antlr4::ParserRuleContext {
  public:
    MathOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUBSTRACTION();
    antlr4::tree::TerminalNode *MULTIPLY();
    antlr4::tree::TerminalNode *DIVIDE();
    antlr4::tree::TerminalNode *MOD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MathOpContext* mathOp();

  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ImmutableContext *immutable();
    MutableContext *mutable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FactorContext* factor();

  class  MutableContext : public antlr4::ParserRuleContext {
  public:
    MutableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LS();
    antlr4::tree::TerminalNode *INTNUMBER();
    antlr4::tree::TerminalNode *RS();
    antlr4::tree::TerminalNode *POINTER_ADDRESS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MutableContext* mutable();

  class  ImmutableContext : public antlr4::ParserRuleContext {
  public:
    ImmutableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR();
    MathExpContext *mathExp();
    antlr4::tree::TerminalNode *RR();
    CallContext *call();
    ConstantContext *constant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImmutableContext* immutable();

  class  CallContext : public antlr4::ParserRuleContext {
  public:
    CallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LR();
    ArgsContext *args();
    antlr4::tree::TerminalNode *RR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallContext* call();

  class  ArgsContext : public antlr4::ParserRuleContext {
  public:
    ArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArgListContext *argList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgsContext* args();

  class  ArgListContext : public antlr4::ParserRuleContext {
  public:
    ArgListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleExpContext *simpleExp();
    ArgListContext *argList();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgListContext* argList();
  ArgListContext* argList(int precedence);
  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL();
    antlr4::tree::TerminalNode *INTNUMBER();
    antlr4::tree::TerminalNode *CHAR_CONST();
    antlr4::tree::TerminalNode *STRING_CONST();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *DOUBNUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool declListSempred(DeclListContext *_localctx, size_t predicateIndex);
  bool parmListSempred(ParmListContext *_localctx, size_t predicateIndex);
  bool parmIdListSempred(ParmIdListContext *_localctx, size_t predicateIndex);
  bool stmtListSempred(StmtListContext *_localctx, size_t predicateIndex);
  bool logicalExpSempred(LogicalExpContext *_localctx, size_t predicateIndex);
  bool argListSempred(ArgListContext *_localctx, size_t predicateIndex);

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

