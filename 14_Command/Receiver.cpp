#include <iostream>
#include "Receiver.h"

void Receiver::Action()
{
    std::cout << "[" << this << "] Receiver::Action() is called" << std::endl;
}

void Receiver::ActionForTemplate()
{
    std::cout << "[" << this << "] Receiver::ActionForTemplate() is called" << std::endl;
}