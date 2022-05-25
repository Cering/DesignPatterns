#pragma once
#include "State.h"

class ConcreteStateA : public State
{
public:
    virtual void Handle(Context* ctx) override;
    static ConcreteStateA* Instance();
public:
    virtual ~ConcreteStateA() = default;
private:
    ConcreteStateA() = default;
private:
    static ConcreteStateA* _instance;
};