#include <iostream>
#include "FlyweightFactory.h"
#include "ConcreteFlyweight.h"

std::shared_ptr<FlyweightFactory> FlyweightFactory::_instance(nullptr);

std::shared_ptr<FlyweightFactory> FlyweightFactory::Instance()
{
    if(!_instance)
        _instance.reset(new FlyweightFactory());
    return _instance;
}

std::shared_ptr<Flyweight> FlyweightFactory::GetFlyweight(char key)
{
    auto it = _flyweight.find(key);
    if(it != _flyweight.end())
    {
        std::cout << "Found existing flyweight: " << key << std::endl;
        return it->second;
    }

    std::cout << "Not found flyweight and create: " << key << std::endl;
    std::shared_ptr<Flyweight> item(new ConcreteFlyweight(key));
    _flyweight.emplace(std::make_pair(key, item));
    return item;
}