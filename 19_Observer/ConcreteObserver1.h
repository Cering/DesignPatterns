#pragma once
#include "Observer.h"
#include "ConcreteSubject.h"

class ConcreteObserver1 : public Observer
{
public:
    virtual void Update(std::shared_ptr<Subject> changed_subject) override;
    virtual void Print() const override;
public:
    ConcreteObserver1(std::shared_ptr<ConcreteSubject> s);
    virtual ~ConcreteObserver1();
private:
    std::weak_ptr<ConcreteSubject> _subject;
    State _observer_state;
};