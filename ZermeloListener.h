
// Generated from Zermelo.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "ZermeloParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ZermeloParser.
 */
class  ZermeloListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterSet(ZermeloParser::SetContext *ctx) = 0;
  virtual void exitSet(ZermeloParser::SetContext *ctx) = 0;

  virtual void enterAssignment(ZermeloParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(ZermeloParser::AssignmentContext *ctx) = 0;

  virtual void enterMembership(ZermeloParser::MembershipContext *ctx) = 0;
  virtual void exitMembership(ZermeloParser::MembershipContext *ctx) = 0;

  virtual void enterSubset(ZermeloParser::SubsetContext *ctx) = 0;
  virtual void exitSubset(ZermeloParser::SubsetContext *ctx) = 0;

  virtual void enterProgram(ZermeloParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(ZermeloParser::ProgramContext *ctx) = 0;


};

