#pragma once
#include <string>

enum MESSAGE_ID
{
    MESSAGE_1_TO_2 = 1,
    MESSAGE_2_TO_1
};

class Mediator
{
public:
    virtual void HandleMessage(MESSAGE_ID msg_id, const std::string& msg_info) = 0;
    virtual void CreateColleagues() = 0;
public:
    virtual ~Mediator() = default;
};