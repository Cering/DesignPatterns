#include <iostream>
#include "ConcreteHandler1.h"

ConcreteHandler1::ConcreteHandler1(std::shared_ptr<Handler> s) : Handler(s)
{
}

void ConcreteHandler1::HandleRequest(RequestType req)
{
    switch(req)
    {
        case REQUEST_A:
            std::cout << "[" << this << "] ConcreteHandler1 dispose request #" << req << std::endl;
            break;
        default:
            Handler::HandleRequest(req);
            break;
    }
}