#include <iostream>
#include "Leaf.h"

void Leaf::Operation()
{
    std::cout << "[" << _id << "]Leaf::Operation()" << std::endl;
}

std::shared_ptr<Component> Leaf::GetChild(int id)
{
    if(_id == id)
        return shared_from_this();
    return nullptr;
}