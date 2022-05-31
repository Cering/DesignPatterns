#include <iostream>
#include "Composite.h"

void Composite::Operation()
{
    std::cout << "[" << this << "]-[" << _id << "] Composite::Operation()" << std::endl;
    for(const auto& it : _children)
    {
        it->Operation();
    }
}

void Composite::Add(std::shared_ptr<Component> item)
{
    std::cout << "[" << this << "]-[" << _id << "] Composite::Add() [" << item.get() << "]" << std::endl;
    _children.emplace_back(item);
}

void Composite::Remove(std::shared_ptr<Component> item)
{
    std::list<std::shared_ptr<Component>>::iterator it = _children.begin();
    while(it != _children.end())
    {
        if(*it == item)
        {
            std::cout << "[" << this << "]-[" << _id << "] Composite::Remove() [" << item.get() << "]" << std::endl;
            it = _children.erase(it);
            break;
        }
        (*it)->Remove(item);
        it++;
    }
}

std::shared_ptr<Component> Composite::GetChild(int id)
{
    std::shared_ptr<Component> ret(nullptr);
    do
    {
        if(_id == id)
        {
            ret = shared_from_this();
            break;
        }

        std::list<std::shared_ptr<Component>>::iterator it = _children.begin();
        while(it != _children.end())
        {
            ret = (*it)->GetChild(id);
            if(ret)
                break;
            it++;
        }
    }while(false);

    std::cout << "[" << this << "]-[" << _id << "] Composite::GetChild() [" << ret.get() << "]-[" << id << "]" << std::endl;
    return ret;
}