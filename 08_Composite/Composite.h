#pragma once
#include <list>
#include "Component.h"

class Composite : public Component, public std::enable_shared_from_this<Composite>
{
public:
    virtual void Operation() override;
    virtual void Add(std::shared_ptr<Component> item) override;
    virtual void Remove(std::shared_ptr<Component> item) override;
    virtual std::shared_ptr<Component> GetChild(int id) override;
public:
    virtual ~Composite() = default;
private:
    std::list<std::shared_ptr<Component>> _children;
};