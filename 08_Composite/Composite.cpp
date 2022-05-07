#include <iostream>
#include "Composite.h"

void Composite::Operation()
{
    std::cout << "[" << _id << "]Composite::Operation()" << std::endl;
    for(auto it : _children)
    {
        it->Operation();
    }
}

void Composite::Add(std::shared_ptr<Component> item)
{
    _children.emplace_back(item);
}

void Composite::Remove(std::shared_ptr<Component> item)
{
    std::list<std::shared_ptr<Component>>::iterator it = _children.begin();
    while(it != _children.end())
    {
        if(*it == item)
        {
            it = _children.erase(it);
            break;
        }
        (*it)->Remove(item);
        it++;
    }
}

std::shared_ptr<Component> Composite::GetChild(int id)
{
    if(_id == id)
        return shared_from_this();

    std::list<std::shared_ptr<Component>>::iterator it = _children.begin();
    while(it != _children.end())
    {
        std::shared_ptr<Component> ret = (*it)->GetChild(id);
        if(ret)
            return ret;
        it++;
    }

    return nullptr;
}