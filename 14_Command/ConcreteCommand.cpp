#include <iostream>
#include "ConcreteCommand.h"

ConcreteCommand::ConcreteCommand(std::shared_ptr<Receiver> r) : _receiver(r)
{
    std::cout << "[" << this << "] ConcreteCommand() get receiver [" << _receiver.get() << "]" << std::endl;
}

void ConcreteCommand::Execute()
{
    std::cout << "[" << this << "] ConcreteCommand::Execute() call receiver [" << _receiver.get() << "]" << std::endl;
    _receiver->Action();
}