#pragma once
#include "Subject.h"

class RealSubject : public Subject
{
public:
    virtual void Request() override;
public:
    virtual ~RealSubject() = default;
};