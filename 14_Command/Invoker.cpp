#include <iostream>
#include "Invoker.h"

void Invoker::Add(std::shared_ptr<Command> cmd)
{
    if(cmd)
    {
        _cmds.emplace_back(cmd);
        std::cout << "[" << this << "] Invoker:Add() [" << cmd.get() << "], left size " << _cmds.size() << std::endl;
    }
}

void Invoker::Remove(std::shared_ptr<Command> cmd)
{
    if(cmd)
    {
        _cmds.remove(cmd);
        std::cout << "[" << this << "] Invoker:Remove() [" << cmd.get() << "], left size " << _cmds.size() << std::endl;
    }
}

void Invoker::Run()
{
    while(!_cmds.empty())
    {
        std::shared_ptr<Command> cmd(_cmds.front());
        std::cout << "[" << this << "] Invoker:Run() [" << cmd.get() << "]" << std::endl;
        cmd->Execute();
        _cmds.pop_front();
    }
}