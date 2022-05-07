#pragma once
#include <list>
#include "Component.h"

class Composite : public Component, public std::enable_shared_from_this<Composite>
{
public:
    virtual void Operation();
    virtual void Add(std::shared_ptr<Component> item);
    virtual void Remove(std::shared_ptr<Component> item);
    virtual std::shared_ptr<Component> GetChild(int id);
private:
    std::list<std::shared_ptr<Component>> _children;
};