#include <iostream>
#include "ObjectAdapter.h"

void ObjectAdapter::Request()
{
    std::cout << "ObjectAdapter call:" << std::endl;
    _adaptee->SpecificRequest();
}

ObjectAdapter::ObjectAdapter() : _adaptee(new Adaptee)
{
}
    
ObjectAdapter::~ObjectAdapter()
{
    if(_adaptee)
    {
        delete _adaptee;
        _adaptee = nullptr;
    }
}