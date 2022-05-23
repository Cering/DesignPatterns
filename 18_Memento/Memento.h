#pragma once
#include "Originator.h"

class Memento
{
    friend class Originator;
public:
    int GetId() const;
protected:
    State GetState() const;
    void SetState(const State& s);
private:
    Memento();
private:
    static int _next_id;
    int _id;
    State _mem_state;
};