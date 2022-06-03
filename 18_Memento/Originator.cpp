#include <iostream>
#include "Originator.h"
#include "Memento.h"

State::State() : var_int(0), var_char('a'), var_float(0.0)
{
}
std::ostream& operator <<(std::ostream& os, const State& s)
{
    os << "["  << s.var_int << "]"
       << "-[" << s.var_char << "]"
       << "-[" << s.var_float << "]";
    return os;
}

void Originator::SetInt(int i)
{
    _state.var_int = i;
}
void Originator::SetChar(char c)
{
    _state.var_char = c;
}
void Originator::SetFloat(float f)
{
    _state.var_float = f;
}

void Originator::PrintState() const
{
    std::cout << "[" << this << "] Originator::PrintState() " << _state << std::endl;
}

void Originator::SetMemento(std::shared_ptr<Memento> m)
{
    if(m)
    {
        std::cout << "[" << this << "] Originator::SetMemento() [" << m.get() << "]-[" << m->GetId() << "]" << std::endl;
        _state = m->GetState();
    }
}

std::shared_ptr<Memento> Originator::CreateMemento()
{
    std::shared_ptr<Memento> ret(new Memento());
    ret->SetState(_state);
    std::cout << "[" << this << "] Originator::CreateMemento() [" << ret.get() << "]-[" << ret->GetId() << "]" << std::endl;
    return ret;
}