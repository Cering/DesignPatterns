#pragma once
#include "Singleton.h"

class SubSingleton2 : public Singleton
{
    friend class Singleton;
public:
    virtual void Print() override;
public:
    virtual ~SubSingleton2() = default;
protected:
    SubSingleton2(int info);
private:
    int _info;
};