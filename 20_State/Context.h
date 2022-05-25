#pragma once
#include "State.h"

class Context
{
public:
    void Request();
public:
    Context();
private:
    friend class State;
    void ChangeState(State* s);
private:
    State* _state;
};