#pragma once
#include <memory>
#include "Component.h"

class Decorator : public Component
{
public:
    virtual void Operation();
public:
    Decorator(std::shared_ptr<Component> item);
    virtual ~Decorator() = default;
protected:
    std::shared_ptr<Component> _component;
};