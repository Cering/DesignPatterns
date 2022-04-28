#pragma once
#include "Target.h"
#include "Adaptee.h"

class ObjectAdapter : public Target
{
public:
    virtual void Request();
public:
    ObjectAdapter();
    ~ObjectAdapter();
private:
    Adaptee* _adaptee;
};