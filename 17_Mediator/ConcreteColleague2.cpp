#include <iostream>
#include "ConcreteColleague2.h"

ConcreteColleague2::ConcreteColleague2(std::shared_ptr<Mediator> m) : Colleague(m)
{
}

void ConcreteColleague2::SendMessage(const std::string& msg)
{
    std::shared_ptr<Mediator> ptr = _mediator.lock();
    if(ptr)
    {
        std::cout << "[" << this << "] ConcreteColleague2::SendMessage(): " << msg << std::endl;
        ptr->HandleMessage(MESSAGE_2_TO_1, msg);
    }
}

void ConcreteColleague2::ReceiveMessage(const std::string& msg)
{
    std::cout << "[" << this << "] ConcreteColleague2::ReceiveMessage(): " << msg << std::endl;
}