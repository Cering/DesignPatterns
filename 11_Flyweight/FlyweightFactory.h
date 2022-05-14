#pragma once
#include <map>
#include <memory>
#include "Flyweight.h"

class FlyweightFactory
{
public:
    static std::shared_ptr<FlyweightFactory> Instance();
    std::shared_ptr<Flyweight> GetFlyweight(char key);
protected:
    FlyweightFactory() = default;
private:
    static std::shared_ptr<FlyweightFactory> _instance;
    std::map<char, std::shared_ptr<Flyweight>> _flyweight;
};