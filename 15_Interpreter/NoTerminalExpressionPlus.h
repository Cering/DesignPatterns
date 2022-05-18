#pragma once
#include "AbstractExpression.h"

class NoTerminalExpressionPlus : public AbstractExpression
{
public:
    virtual int Interpret(std::shared_ptr<Context> context);
    virtual std::string toString();
public:
    NoTerminalExpressionPlus(std::shared_ptr<AbstractExpression> l, std::shared_ptr<AbstractExpression> r);
    virtual ~NoTerminalExpressionPlus() = default;
private:
    std::shared_ptr<AbstractExpression> _left;
    std::shared_ptr<AbstractExpression> _right;
};