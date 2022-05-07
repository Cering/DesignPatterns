#include <iostream>
#include "Component.h"

int Component::_next_id = 0;
Component::Component() : _id(_next_id++)
{
}

void Component::Operation()
{
    std::cout << "[" << _id << "]Component::Operation()" << std::endl;
}

void Component::Add(std::shared_ptr<Component> item)
{
}

void Component::Remove(std::shared_ptr<Component> item)
{
}

std::shared_ptr<Component> Component::GetChild(int id)
{
    return nullptr;
}