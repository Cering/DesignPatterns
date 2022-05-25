#include <iostream>
#include "Subject.h"

void Subject::Attach(Observer* o)
{
    std::cout << "[" << this << "] Subject attach observer [" << o << "]" << std::endl;
    _observers.emplace(o);
}

void Subject::Detach(Observer* o)
{
    std::cout << "[" << this << "] Subject detach observer [" << o << "]" << std::endl;
    _observers.erase(o);
}

void Subject::Notify()
{
    std::cout << "[" << this << "] Subject notify " << _observers.size() << " observers" << std::endl;
    for(auto it=_observers.begin(); it!=_observers.end(); it++)
        (*it)->Update(shared_from_this());
}