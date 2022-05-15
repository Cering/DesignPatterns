#include <iostream>
#include "ConcreteHandler2.h"

ConcreteHandler2::ConcreteHandler2(std::shared_ptr<Handler> s) : Handler(s)
{
}

void ConcreteHandler2::HandleRequest(RequestType req)
{
    switch(req)
    {
        case REQUEST_B:
            std::cout << "[" << this << "] ConcreteHandler2 dispose request #" << req << std::endl;
            break;
        default:
            Handler::HandleRequest(req);
            break;
    }
}