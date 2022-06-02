#pragma once
#include <iostream>
#include <memory>
#include "Command.h"

template <class Callback>
class TemplateCommand : public Command
{
public:
    typedef void (Callback::*Action)();
public:
    virtual void Execute() override;
public:
    TemplateCommand(std::shared_ptr<Callback> r, Action a);
    virtual ~TemplateCommand() = default;
private:
    std::shared_ptr<Callback> _receiver;
    Action _action;
};

template <class Callback>
TemplateCommand<Callback>::TemplateCommand(std::shared_ptr<Callback> r, Action a) : _receiver(r), _action(a)
{
    std::cout << "[" << this << "] TemplateCommand() get receiver [" << _receiver.get() << "]" << std::endl;
}

template <class Callback>
void TemplateCommand<Callback>::Execute()
{
    std::cout << "[" << this << "] TemplateCommand::Execute() call receiver [" << _receiver.get() << "]" << std::endl;
    ((*_receiver).*_action)();
}