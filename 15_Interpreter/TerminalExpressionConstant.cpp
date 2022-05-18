#include <sstream>
#include "TerminalExpressionConstant.h"

TerminalExpressionConstant::TerminalExpressionConstant(int val) : _value(val)
{
}

int TerminalExpressionConstant::Interpret(std::shared_ptr<Context> context)
{
    return _value;
}

std::string TerminalExpressionConstant::toString()
{
    std::stringstream ss;
    ss << _value;
    return ss.str();
}