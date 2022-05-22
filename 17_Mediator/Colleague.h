#pragma once
#include <memory>
#include "Mediator.h"

class Colleague
{
public:
    virtual void SendMessage(const std::string& msg) = 0;
    virtual void ReceiveMessage(const std::string& msg) = 0;
public:
    Colleague(std::shared_ptr<Mediator> m) : _mediator(m) {}
    virtual ~Colleague() = default;
protected:
    std::weak_ptr<Mediator> _mediator;
};