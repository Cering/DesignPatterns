#pragma once
#include <memory>

enum RequestType
{
    REQUEST_A = 1,
    REQUEST_B,
    REQUEST_C,
};

class Handler
{
public:
    virtual void HandleRequest(RequestType req);
public:
    Handler(std::shared_ptr<Handler> s);
    virtual ~Handler() = default;
private:
    std::shared_ptr<Handler> _successor;
};