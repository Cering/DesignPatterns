#include <iostream>
#include "ConcreteColleague1.h"

ConcreteColleague1::ConcreteColleague1(std::shared_ptr<Mediator> m) : Colleague(m)
{
}

void ConcreteColleague1::SendMessage(const std::string& msg)
{
    std::shared_ptr<Mediator> ptr = _mediator.lock();
    if(ptr)
    {
        std::cout << "[" << this << "] ConcreteColleague1::SendMessage(): " << msg << std::endl;
        ptr->HandleMessage(MESSAGE_1_TO_2, msg);
    }
}

void ConcreteColleague1::ReceiveMessage(const std::string& msg)
{
    std::cout << "[" << this << "] ConcreteColleague1::ReceiveMessage(): " << msg << std::endl;
}