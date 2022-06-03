#include <iostream>
#include "Memento.h"

int Memento::_next_id = 0;
Memento::Memento() : _id(_next_id++)
{
}

int Memento::GetId() const
{
    return _id;
}

State Memento::GetState() const
{
    std::cout << "Get " << _mem_state << " from memento [" << this << "]-[" << _id << "]" << std::endl;
    return _mem_state;
}

void Memento::SetState(const State& s)
{
    std::cout << "Set " << s << " into memento [" << this << "]-[" << _id << "]" << std::endl;
    _mem_state = s;
}