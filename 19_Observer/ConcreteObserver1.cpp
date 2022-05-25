#include <iostream>
#include "ConcreteObserver1.h"

ConcreteObserver1::ConcreteObserver1(std::shared_ptr<ConcreteSubject> s) : _subject(s)
{
    if(s)
    {
        s->Attach(this);
        Update(s);
    }
}

ConcreteObserver1::~ConcreteObserver1()
{
    std::shared_ptr<ConcreteSubject> ptr = _subject.lock();
    if(ptr)
        ptr->Detach(this);
}

void ConcreteObserver1::Update(std::shared_ptr<Subject> changed_subject)
{
    std::shared_ptr<ConcreteSubject> ptr = _subject.lock();
    if(ptr && ptr==changed_subject)
    {
        _observer_state = ptr->GetState();
        Print();
    }
}

void ConcreteObserver1::Print() const
{
    std::cout << "[" << this << "] ConcreteObserver1::Print() "
              << _observer_state.a << " + " << _observer_state.b << " = " << _observer_state.a+_observer_state.b
              << std::endl;
}