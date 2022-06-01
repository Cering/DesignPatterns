#include <iostream>
#include "Proxy.h"

int main()
{
    std::cout << "use proxy with authority:" << std::endl;
    std::shared_ptr<Subject> subject1(new Proxy());
    subject1->Request();

    std::cout << std::endl;
    std::cout << "use proxy without authority:" << std::endl;
    std::shared_ptr<Subject> subject2(new Proxy(false));
    subject2->Request();

    return 0;
}