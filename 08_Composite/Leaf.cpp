#include <iostream>
#include "Leaf.h"

void Leaf::Operation()
{
    std::cout << "[" << this << "]-[" << _id << "] Leaf::Operation()" << std::endl;
}

std::shared_ptr<Component> Leaf::GetChild(int id)
{
    if(_id == id)
    {
        std::cout << "[" << this << "]-[" << _id << "] Leaf::GetChild() hit" << std::endl;
        return shared_from_this();
    }
    return nullptr;
}