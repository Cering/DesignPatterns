#include <iostream>
#include "Proxy.h"

Proxy::Proxy(bool flag) : _flag(flag), _real_subject(nullptr)
{
}

void Proxy::Request()
{
    if(!_flag)
    {
        std::cout << "[" << this << "] Proxy refuse to call real subject [" << _real_subject.get() << "]" << std::endl;
        return;
    }
    if(!_real_subject)
    {
        _real_subject.reset(new RealSubject());
        std::cout << "[" << this << "] Proxy create real subject [" << _real_subject.get() << "]" << std::endl;
    }
    std::cout << "[" << this << "] Proxy call real subject [" << _real_subject.get() << "]" << std::endl;
    _real_subject->Request();
}