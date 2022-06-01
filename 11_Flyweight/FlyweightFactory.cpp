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
        std::cout << "[" << this << "] FlyweightFactory::GetFlyweight() found key: [" << key << "]-[" << it->second.get() << "]" << std::endl;
        return it->second;
    }

    std::shared_ptr<Flyweight> item(new ConcreteFlyweight(key));
    _flyweight.emplace(std::make_pair(key, item));
    std::cout << "[" << this << "] FlyweightFactory::GetFlyweight() not found key and create: [" << key << "]-[" << item.get() << "]" << std::endl;
    return item;
}