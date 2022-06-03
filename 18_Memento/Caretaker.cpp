#include "Caretaker.h"

void Caretaker::AddMemento(std::shared_ptr<Memento> m)
{
    if(m)
    {
        std::cout << "[" << this << "] Caretaker::AddMemento() [" << m.get() << "]-[" << m->GetId() << "]" << std::endl;
        _mementos[m->GetId()] = m;
    }
}

std::shared_ptr<Memento> Caretaker::GetMemento(int id)
{
    auto it = _mementos.find(id);
    if(it != _mementos.end())
    {
        std::cout << "[" << this << "] Caretaker::GetMemento() found [" << it->second.get() << "]-[" << id << "]" << std::endl;
        return it->second;
    }
    else
    {
        std::cout << "[" << this << "] Caretaker::GetMemento() not found [" << id << "]" << std::endl;
        return nullptr;
    }
}

bool Caretaker::DelMemento(int id)
{
    auto it = _mementos.find(id);
    if(it != _mementos.end())
    {
        std::cout << "[" << this << "] Caretaker::DelMemento() found [" << it->second.get() << "]-[" << id << "]" << std::endl;
        _mementos.erase(it);
        return true;
    }
    else
    {
        std::cout << "[" << this << "] Caretaker::DelMemento() not found [" << id << "]" << std::endl;
        return false;
    }
}