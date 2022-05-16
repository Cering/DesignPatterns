#pragma once
#include <memory>
#include "Command.h"
#include "Receiver.h"

class ConcreteCommand : public Command
{
public:
    virtual void Execute() override;
public:
    ConcreteCommand(std::shared_ptr<Receiver> r);
    virtual ~ConcreteCommand() = default;
private:
    std::shared_ptr<Receiver> _receiver;
};