#include <iostream>
#include <memory>
#include "Context.h"

int main()
{
    std::shared_ptr<Context> context(new Context());

    context->Request();
    std::cout << std::endl;
    context->Request();
    std::cout << std::endl;
    context->Request();

    return 0;
}