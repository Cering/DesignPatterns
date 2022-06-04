#pragma once

class Strategy
{
public:
    virtual void AlgorithmInterface(int a, int b) const = 0;
public:
    virtual ~Strategy() = default;
protected:
    Strategy() = default;
};