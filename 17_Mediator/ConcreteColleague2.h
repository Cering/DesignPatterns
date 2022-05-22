#pragma once
#include "Colleague.h"

class ConcreteColleague2 : public Colleague
{
public:
    virtual void SendMessage(const std::string& msg) override;
    virtual void ReceiveMessage(const std::string& msg) override;
public:
    ConcreteColleague2(std::shared_ptr<Mediator> m);
    virtual ~ConcreteColleague2() = default;
};