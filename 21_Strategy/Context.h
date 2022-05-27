#pragma once
#include <memory>
#include "Strategy.h"

class Context
{
public:
    Context(std::shared_ptr<Strategy> s);
    void SetStrategy(std::shared_ptr<Strategy> s);
    void ContextInterface() const;
private:
    std::shared_ptr<Strategy> _strategy;
    int _a;
    int _b;
};