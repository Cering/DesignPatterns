#pragma once
#include "AbstractExpression.h"

class TerminalExpressionVariable : public AbstractExpression, public std::enable_shared_from_this<AbstractExpression>
{
public:
    virtual int Interpret(std::shared_ptr<Context> context) override;
    virtual std::string toString() override;
public:
    TerminalExpressionVariable(const std::string& key);
    virtual ~TerminalExpressionVariable() = default;
private:
    std::string _name;
};