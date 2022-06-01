#pragma once

class Flyweight
{
public:
    virtual void Operation(int extrinsicState) = 0;
public:
    virtual ~Flyweight() = default;
protected:
    Flyweight() = default;
};