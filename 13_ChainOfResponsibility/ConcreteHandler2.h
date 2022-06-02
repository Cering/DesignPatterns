#pragma once
#include "Handler.h"

class ConcreteHandler2 : public Handler
{
public:
    virtual void HandleRequest(RequestType req) override;
public:
    ConcreteHandler2(std::shared_ptr<Handler> s);
    virtual ~ConcreteHandler2() = default;
};