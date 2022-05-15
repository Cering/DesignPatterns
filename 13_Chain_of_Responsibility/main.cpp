#include <iostream>
#include "ConcreteHandler1.h"
#include "ConcreteHandler2.h"

int main()
{
    std::shared_ptr<Handler> handler_2(new ConcreteHandler2(nullptr));
    std::shared_ptr<Handler> handler_1(new ConcreteHandler1(handler_2));

    std::cout << "send request A:" << std::endl;
    handler_1->HandleRequest(REQUEST_A);

    std::cout << std::endl << "send request B:" << std::endl;
    handler_1->HandleRequest(REQUEST_B);

    std::cout << std::endl << "send request C:" << std::endl;
    handler_1->HandleRequest(REQUEST_C);

    return 0;
}