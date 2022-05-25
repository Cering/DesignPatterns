#pragma once
#include <set>
#include "Observer.h"

class Subject : public std::enable_shared_from_this<Subject>
{
public:
    virtual void Attach(Observer* o);
    virtual void Detach(Observer* o);
    virtual void Notify();
public:
    virtual ~Subject() = default;
protected:
    Subject() = default;
private:
    std::set<Observer*> _observers;
};