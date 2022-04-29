#include <memory>
#include "RefinedAbstraction.h"

int main()
{
    std::shared_ptr<Abstraction> obj0(new RefinedAbstraction());
    std::shared_ptr<Abstraction> obj1(new RefinedAbstraction(1));
    std::shared_ptr<Abstraction> obj2(new RefinedAbstraction(2));

    obj0->Operation();
    obj1->Operation();
    obj2->Operation();

    return 0;
}