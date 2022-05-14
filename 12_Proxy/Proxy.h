#pragma once
#include <memory>
#include "RealSubject.h"

class Proxy : public Subject
{
public:
    void Request();
    void SetFlag(bool flag);
public:
    Proxy(bool flag=true);
    virtual ~Proxy() = default;
private:
    bool _flag;
    std::shared_ptr<RealSubject> _real_subject;
};