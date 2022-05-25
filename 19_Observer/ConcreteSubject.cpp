#include <iostream>
#include "ConcreteSubject.h"

State::State(int x, int y) : a(x), b(y)
{
}

std::ostream& operator <<(std::ostream& os, const State& s)
{
    os << "a:" << s.a << ", b:" << s.b;
    return os;
}

void ConcreteSubject::SetState(const State& s)
{
    _subject_state = s;
}

State ConcreteSubject::GetState() const
{
    return _subject_state;
}

void ConcreteSubject::PrintState() const
{
    std::cout << "[" << this << "] ConcreteSubject::PrintState() " << _subject_state << std::endl;
}