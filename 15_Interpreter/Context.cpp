#include <iostream>
#include <stdlib.h>
#include "Context.h"
#include "AbstractExpression.h"

int Context::Lookup(std::shared_ptr<AbstractExpression> key) const
{
    auto it = _context_map.find(key);
    if(it != _context_map.end())
    {
        //std::cout << "[" << this << "] Context found " << key->toString() << " = " << it->second << std::endl;
        return it->second;
    }
    std::cout << "[" << this << "] Context not found " << key->toString() << ", exit" << std::endl;
    exit(0);
}

void Context::Assign(std::shared_ptr<AbstractExpression> key, int val)
{
    auto it = _context_map.find(key);
    if(it != _context_map.end())
    {
        std::cout << "[" << this << "] Context update " << key->toString() << " = " << val << std::endl;
        it->second = val;
    }
    else
    {
        std::cout << "[" << this << "] Context add " << key->toString() << " = " << val << std::endl;
        _context_map.emplace(std::make_pair(key, val));
    }
}