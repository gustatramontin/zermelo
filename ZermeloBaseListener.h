
// Generated from Zermelo.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "ZermeloListener.h"


/**
 * This class provides an empty implementation of ZermeloListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ZermeloBaseListener : public ZermeloListener {
public:

  virtual void enterSet(ZermeloParser::SetContext * /*ctx*/) override { }
  virtual void exitSet(ZermeloParser::SetContext * /*ctx*/) override { }

  virtual void enterAssignment(ZermeloParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(ZermeloParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterMembership(ZermeloParser::MembershipContext * /*ctx*/) override { }
  virtual void exitMembership(ZermeloParser::MembershipContext * /*ctx*/) override { }

  virtual void enterSubset(ZermeloParser::SubsetContext * /*ctx*/) override { }
  virtual void exitSubset(ZermeloParser::SubsetContext * /*ctx*/) override { }

  virtual void enterProgram(ZermeloParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(ZermeloParser::ProgramContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

