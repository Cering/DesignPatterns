#include <iostream>
#include "ConcreteObserver2.h"

ConcreteObserver2::ConcreteObserver2(std::shared_ptr<ConcreteSubject> s) : _subject(s)
{
    if(s)
    {
        s->Attach(this);
        Update(s);
    }
}

ConcreteObserver2::~ConcreteObserver2()
{
    std::shared_ptr<ConcreteSubject> ptr = _subject.lock();
    if(ptr)
        ptr->Detach(this);
}

void ConcreteObserver2::Update(std::shared_ptr<Subject> changed_subject)
{
    std::shared_ptr<ConcreteSubject> ptr = _subject.lock();
    if(ptr && ptr==changed_subject)
    {
        _observer_state = ptr->GetState();
        Print();
    }
}

void ConcreteObserver2::Print() const
{
    std::cout << "[" << this << "] ConcreteObserver2::Print() "
              << _observer_state.a << " * " << _observer_state.b << " = " << _observer_state.a*_observer_state.b
              << std::endl;
}