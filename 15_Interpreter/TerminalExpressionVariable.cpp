#include <sstream>
#include "TerminalExpressionVariable.h"

TerminalExpressionVariable::TerminalExpressionVariable(const std::string& key) : _name(key)
{
}

int TerminalExpressionVariable::Interpret(std::shared_ptr<Context> context)
{
    return context->Lookup(shared_from_this());
}

std::string TerminalExpressionVariable::toString()
{
    return _name;
}