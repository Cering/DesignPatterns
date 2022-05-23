#include "Caretaker.h"

void Caretaker::AddMemento(std::shared_ptr<Memento> m)
{
    if(m)
        _mementos[m->GetId()] = m;
}

std::shared_ptr<Memento> Caretaker::GetMemento(int id)
{
    auto it = _mementos.find(id);
    if(it != _mementos.end())
        return it->second;
    else
    {
        std::cout << "Not found memento[" << id << "] in Caretaker::GetMemento()" << std::endl;
        return nullptr;
    }
}

bool Caretaker::DelMemento(int id)
{
    auto it = _mementos.find(id);
    if(it != _mementos.end())
    {
        _mementos.erase(it);
        return true;
    }
    else
    {
        std::cout << "Not found memento[" << id << "] in Caretaker::DelMemento()" << std::endl;
        return false;
    }
}