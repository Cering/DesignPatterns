#pragma once
#include <map>
#include <memory>

class AbstractExpression;

class Context
{
public:
    int Lookup(std::shared_ptr<AbstractExpression> key) const;
    void Assign(std::shared_ptr<AbstractExpression> key, int val);
private:
    std::map<std::shared_ptr<AbstractExpression>, int> _context_map;
};