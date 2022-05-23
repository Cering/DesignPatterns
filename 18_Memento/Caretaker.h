#pragma once
#include <map>
#include "Memento.h"

class Caretaker
{
public:
    void AddMemento(std::shared_ptr<Memento> m);
    std::shared_ptr<Memento> GetMemento(int id);
    bool DelMemento(int id);
private:
    std::map<int, std::shared_ptr<Memento>> _mementos;
};