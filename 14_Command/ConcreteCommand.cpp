#include <iostream>
#include "ConcreteCommand.h"

ConcreteCommand::ConcreteCommand(std::shared_ptr<Receiver> r) : _receiver(r)
{
}

void ConcreteCommand::Execute()
{
    std::cout << "[" << this << "] Call ConcreteCommand::Execute()" << std::endl;
    _receiver->Action();
}