#include <sstream>
#include "NoTerminalExpressionPlus.h"

NoTerminalExpressionPlus::NoTerminalExpressionPlus(std::shared_ptr<AbstractExpression> l, std::shared_ptr<AbstractExpression> r) : _left(l), _right(r)
{
}

int NoTerminalExpressionPlus::Interpret(std::shared_ptr<Context> context)
{
    return _left->Interpret(context) + _right->Interpret(context);
}

std::string NoTerminalExpressionPlus::toString()
{
    std::stringstream ss;
    ss << '(' << _left->toString() << '+' << _right->toString() << ')';
    return ss.str();
}