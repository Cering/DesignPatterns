#pragma once

class Context;

class State
{
public:
    virtual void Handle(Context* ctx) = 0;
protected:
    void ChangeState(Context* ctx, State* s);
public:
    virtual ~State() = default;
};