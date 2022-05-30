#pragma once
#include <string>
#include "Singleton.h"

class SubSingleton1 : public Singleton
{
    friend class Singleton;
public:
    virtual void Print() override;
public:
    virtual ~SubSingleton1() = default;
protected:
    SubSingleton1(const std::string& info);
private:
    std::string _info;
};