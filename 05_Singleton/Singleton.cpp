#include <iostream>
#include "Singleton.h"
#include "SubSingleton1.h"
#include "SubSingleton2.h"

std::shared_ptr<Singleton> Singleton::_instance(nullptr);

std::shared_ptr<Singleton> Singleton::Instance(SingletonType type)
{
    if(!_instance)
    {
        switch(type)
        {
            case SINGLETON_TYPE_1:
                _instance.reset(new SubSingleton1("sub_singleton_1"));
                break;
            case SINGLETON_TYPE_2:
                _instance.reset(new SubSingleton2(2));
                break;
            default:
                _instance.reset(new Singleton());
                break;
        }
        std::cout << "Singleton::Instance() create [" << _instance.get() << "] with type " << type << std::endl;
    }
    return _instance;
}

void Singleton::Print()
{
    std::cout << "[" << this << "] Singleton: [" << _instance.get() << "]" << std::endl;
}