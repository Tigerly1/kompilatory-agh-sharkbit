
// Generated from sharkbit.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"




class  sharkbitLexer : public antlr4::Lexer {
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

  sharkbitLexer(antlr4::CharStream *input);
  ~sharkbitLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

