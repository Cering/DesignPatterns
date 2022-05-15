#pragma once
#include "Handler.h"

class ConcreteHandler1 : public Handler
{
public:
    virtual void HandleRequest(RequestType req);
public:
    ConcreteHandler1(std::shared_ptr<Handler> s);
    virtual ~ConcreteHandler1() = default;
};