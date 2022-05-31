#include <iostream>
#include "ObjectAdapter.h"

void ObjectAdapter::Request()
{
    std::cout << "[" << this << "] ObjectAdapter Request()" << std::endl;
    _adaptee->SpecificRequest();
}

ObjectAdapter::ObjectAdapter() : _adaptee(new Adaptee())
{
}