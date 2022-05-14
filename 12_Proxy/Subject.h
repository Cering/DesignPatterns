#pragma once

class Subject
{
public:
    virtual void Request() = 0;
public:
    virtual ~Subject() = default;
};