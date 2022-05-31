#include <iostream>
#include <memory>
#include "RefinedAbstraction.h"

int main()
{
    std::cout << "implementor default:" << std::endl;
    std::shared_ptr<Abstraction> obj0(new RefinedAbstraction());
    obj0->Operation();

    std::cout << std::endl;
    std::cout << "implementor A:" << std::endl;
    std::shared_ptr<Abstraction> obj1(new RefinedAbstraction(IMPLEMENTOR_TYPE_A));
    obj1->Operation();

    std::cout << std::endl;
    std::cout << "implementor B:" << std::endl;
    std::shared_ptr<Abstraction> obj2(new RefinedAbstraction(IMPLEMENTOR_TYPE_B));
    obj2->Operation();

    return 0;
}