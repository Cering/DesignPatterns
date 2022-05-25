#pragma once
#include "State.h"

class ConcreteStateB : public State
{
public:
    virtual void Handle(Context* ctx) override;
    static ConcreteStateB* Instance();
public:
    virtual ~ConcreteStateB() = default;
private:
    ConcreteStateB() = default;
private:
    static ConcreteStateB* _instance;
};