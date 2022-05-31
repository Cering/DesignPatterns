#pragma once

class Target
{
public:
    virtual void Request() = 0;
public:
    virtual ~Target() = default;
protected:
    Target() = default;
};