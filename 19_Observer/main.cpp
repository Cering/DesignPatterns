#include <iostream>
#include "ConcreteObserver1.h"
#include "ConcreteObserver2.h"

int main()
{
    std::cout << "initial state:" << std::endl;
    std::shared_ptr<ConcreteSubject> subject(new ConcreteSubject());
    subject->PrintState();
    State state(3,4);

    std::shared_ptr<Observer> observer1(new ConcreteObserver1(subject));
    {
        std::shared_ptr<Observer> observer2(new ConcreteObserver2(subject));

        std::cout << std::endl << "change state:" << std::endl;
        subject->SetState(state);
        subject->PrintState();
        subject->Notify();
    }

    std::cout << std::endl << "change state:" << std::endl;
    state.a = 5;
    state.b = 6;
    subject->SetState(state);
    subject->PrintState();
    subject->Notify();
}