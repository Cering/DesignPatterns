#pragma once
#include <memory>
#include "RealSubject.h"

class Proxy : public Subject
{
public:
    virtual void Request() override;
public:
    Proxy(bool flag=true);
    virtual ~Proxy() = default;
private:
    bool _flag;
    std::shared_ptr<RealSubject> _real_subject;
};