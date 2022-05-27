#include <iostream>
#include "Handler.h"

Handler::Handler(std::shared_ptr<Handler> s) : _successor(s)
{
}

void Handler::HandleRequest(RequestType req)
{
    if(_successor)
    {
        std::cout << "[" << this << "] Pass request #" << req << " to next object [" << _successor.get() << "]" << std::endl;
        _successor->HandleRequest(req);
    }
    else
        std::cout << "[" << this << "] Unknown request #" << req << std::endl;
}