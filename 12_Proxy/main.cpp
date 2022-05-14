#include <iostream>
#include "Proxy.h"

int main()
{
    std::shared_ptr<Subject> subject1(new Proxy());
    std::shared_ptr<Subject> subject2(new Proxy(false));

    std::cout << "subject1 with authority:" << std::endl;
    subject1->Request();

    std::cout << std::endl << "subject2 without authority:" << std::endl;
    subject2->Request();

    return 0;
}