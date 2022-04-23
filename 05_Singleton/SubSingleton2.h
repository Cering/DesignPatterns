#pragma once
#include "Singleton.h"

class SubSingleton2 : public Singleton
{
    friend class Singleton;
public:
    virtual void Print();
protected:
    SubSingleton2(int info);
private:
    int _info;
};