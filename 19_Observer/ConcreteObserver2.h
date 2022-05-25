#pragma once
#include "Observer.h"
#include "ConcreteSubject.h"

class ConcreteObserver2 : public Observer
{
public:
    virtual void Update(std::shared_ptr<Subject> changed_subject) override;
    virtual void Print() const override;
public:
    ConcreteObserver2(std::shared_ptr<ConcreteSubject> s);
    virtual ~ConcreteObserver2();
private:
    std::weak_ptr<ConcreteSubject> _subject;
    State _observer_state;
};