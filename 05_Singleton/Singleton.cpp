#include <iostream>
#include "Singleton.h"
#include "SubSingleton1.h"
#include "SubSingleton2.h"

Singleton* Singleton::_instance = nullptr;

Singleton* Singleton::Instance(int type)
{
    if(!_instance)
    {
        switch(type)
        {
            case 1:
                _instance = new SubSingleton1("sub_singleton_1");
                break;
            case 2:
                _instance = new SubSingleton2(2);
                break;
            default:
                _instance = new Singleton();
                break;
        }
    }
    return _instance;
}

void Singleton::Print()
{
    std::cout << "Singleton: " << this << std::endl;
}