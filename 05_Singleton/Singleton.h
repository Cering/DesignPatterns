#pragma once

class Singleton
{
public:
    static Singleton* Instance(int type=0);
    virtual void Print();
protected:
    Singleton() {}
private:
    static Singleton* _instance;
};