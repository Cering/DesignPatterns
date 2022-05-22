#pragma once
#include "Colleague.h"

class ConcreteColleague1 : public Colleague
{
public:
    virtual void SendMessage(const std::string& msg) override;
    virtual void ReceiveMessage(const std::string& msg) override;
public:
    ConcreteColleague1(std::shared_ptr<Mediator> m);
    virtual ~ConcreteColleague1() = default;
};