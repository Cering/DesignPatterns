#pragma once
#include <string>
#include "Context.h"

class AbstractExpression
{
public:
    virtual int Interpret(std::shared_ptr<Context> context) = 0;
    virtual std::string toString() = 0;
public:
    virtual ~AbstractExpression() = default;
};