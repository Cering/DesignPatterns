#pragma once

class Receiver
{
public:
    void Action();
    void ActionForTemplate();
public:
    Receiver();
private:
    static int _next_id;
    int _id;
};