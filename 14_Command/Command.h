#pragma once

class Command
{
public:
    virtual void Execute() = 0;
public:
    virtual ~Command() = default;
};