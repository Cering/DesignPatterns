#pragma once
#include "Component.h"

class Leaf : public Component, public std::enable_shared_from_this<Leaf>
{
public:
    virtual void Operation() override;
    virtual std::shared_ptr<Component> GetChild(int id) override;
public:
    virtual ~Leaf() = default;
};