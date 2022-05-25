#pragma once
#include "Subject.h"

class State
{
public:
    State(int x=0, int y=1);
    friend std::ostream& operator <<(std::ostream& os, const State& s);
public:
    int a;
    int b;
};

class ConcreteSubject : public Subject
{
public:
    void SetState(const State& s);
    State GetState() const;
    void PrintState() const;
public:
    ConcreteSubject() = default;
    ~ConcreteSubject() = default;
private:
    State _subject_state;
};