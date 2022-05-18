#pragma once
#include "AbstractExpression.h"

class TerminalExpressionConstant : public AbstractExpression
{
public:
    virtual int Interpret(std::shared_ptr<Context> context) override;
    virtual std::string toString() override;
public:
    TerminalExpressionConstant(int val);
    virtual ~TerminalExpressionConstant() = default;
private:
    int _value;
};