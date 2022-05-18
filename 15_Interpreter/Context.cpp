#include <iostream>
#include <stdlib.h>
#include "Context.h"
#include "AbstractExpression.h"

int Context::Lookup(std::shared_ptr<AbstractExpression> key) const
{
    auto it = _context_map.find(key);
    if(it != _context_map.end())
        return it->second;
    std::cout << "Not found " << key->toString() << " in context, abort" << std::endl;
    abort();
}

void Context::Assign(std::shared_ptr<AbstractExpression> key, int val)
{
    auto it = _context_map.find(key);
    if(it != _context_map.end())
    {
        std::cout << "Context update " << key->toString() << " = " << val << std::endl;
        it->second = val;
    }
    else
    {
        std::cout << "Context add " << key->toString() << " = " << val << std::endl;
        _context_map.emplace(std::make_pair(key, val));
    }
}