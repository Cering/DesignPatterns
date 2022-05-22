#pragma once
#include "Mediator.h"
#include "ConcreteColleague1.h"
#include "ConcreteColleague2.h"

class ConcreteMediator : public Mediator, public std::enable_shared_from_this<ConcreteMediator>
{
public:
    virtual void HandleMessage(MESSAGE_ID msg_id, const std::string& msg_info) override;
    virtual void CreateColleagues() override;
    void Test();
public:
    virtual ~ConcreteMediator() = default;
private:
    std::shared_ptr<ConcreteColleague1> _colleague_1;
    std::shared_ptr<ConcreteColleague2> _colleague_2;
};