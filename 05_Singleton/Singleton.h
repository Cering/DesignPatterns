#pragma once
#include <memory>

enum SingletonType
{
    SINGLETON_TYPE_1 = 1,
    SINGLETON_TYPE_2
};

class Singleton
{
public:
    static std::shared_ptr<Singleton> Instance(SingletonType type=SINGLETON_TYPE_1);
    virtual void Print();
public:
    virtual ~Singleton() = default;
protected:
    Singleton() = default;
private:
    static std::shared_ptr<Singleton> _instance;
};