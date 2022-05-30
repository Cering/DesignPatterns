#pragma once

class Product
{
public:
    virtual void Print() = 0;
public:
    virtual ~Product() = default;
protected:
    Product() = default;
};