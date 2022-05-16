#pragma once
#include <memory>
#include <list>
#include "Command.h"

class Invoker
{
public:
    void Add(std::shared_ptr<Command> cmd);
    void Remove(std::shared_ptr<Command> cmd);
    void Run();
private:
    std::list<std::shared_ptr<Command>> _cmds;
};