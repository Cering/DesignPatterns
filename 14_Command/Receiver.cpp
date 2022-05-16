#include <iostream>
#include "Receiver.h"

int Receiver::_next_id = 0;
Receiver::Receiver() : _id(_next_id++)
{
}

void Receiver::Action()
{
    std::cout << "#" << _id << " Call Receiver::Action()" << std::endl;
}

void Receiver::ActionForTemplate()
{
    std::cout << "#" << _id << " Call Receiver::ActionForTemplate()" << std::endl;
}