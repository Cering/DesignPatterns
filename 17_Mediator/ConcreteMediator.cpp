#include <iostream>
#include "ConcreteMediator.h"

void ConcreteMediator::CreateColleagues()
{
    _colleague_1.reset(new ConcreteColleague1(shared_from_this()));
    _colleague_2.reset(new ConcreteColleague2(shared_from_this()));
}

void ConcreteMediator::HandleMessage(MessageId msg_id, const std::string& msg_info)
{
    std::cout << "[" << this << "] ConcreteMediator::HandleMessage(): [" << msg_id << "] - " << msg_info << std::endl;
    switch(msg_id)
    {
        case MESSAGE_1_TO_2:
            _colleague_2->ReceiveMessage(msg_info);
            break;
        case MESSAGE_2_TO_1:
            _colleague_1->ReceiveMessage(msg_info);
            break;
        default:
            break;
    }
}

void ConcreteMediator::Test()
{
    CreateColleagues();
    _colleague_1->SendMessage("colleague1 say hello");
    std::cout << std::endl;
    _colleague_2->SendMessage("colleague2 say hello");
}