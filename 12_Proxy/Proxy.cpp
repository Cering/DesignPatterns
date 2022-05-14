#include <iostream>
#include "Proxy.h"

Proxy::Proxy(bool flag) : _flag(flag), _real_subject(nullptr)
{
}

void Proxy::SetFlag(bool flag)
{
    _flag = flag;
}

void Proxy::Request()
{
    if(!_flag)
    {
        std::cout << "Proxy refuse to call Request()" << std::endl;
        return;
    }
    if(!_real_subject)
    {
        std::cout << "Proxy create RealSubject" << std::endl;
        _real_subject.reset(new RealSubject());
    }
    std::cout << "Proxy call Request()" << std::endl;
    _real_subject->Request();
}