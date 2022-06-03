#pragma once
#include <string>

enum MessageId
{
    MESSAGE_1_TO_2 = 1,
    MESSAGE_2_TO_1
};

class Mediator
{
public:
    virtual void HandleMessage(MessageId msg_id, const std::string& msg_info) = 0;
    virtual void CreateColleagues() = 0;
public:
    virtual ~Mediator() = default;
protected:
    Mediator() = default;
};