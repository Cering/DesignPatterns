#include <iostream>
#include "FlyweightFactory.h"
#include "UnsharedConcreteFlyweight.h"

int main()
{
    std::cout << "use shared a:" << std::endl;
    std::shared_ptr<Flyweight> flyweight_a1(FlyweightFactory::Instance()->GetFlyweight('a'));
    flyweight_a1->Operation(1);

    std::cout << std::endl;
    std::cout << "use shared a:" << std::endl;
    std::shared_ptr<Flyweight> flyweight_a2(FlyweightFactory::Instance()->GetFlyweight('a'));
    flyweight_a2->Operation(2);

    std::cout << std::endl;
    std::cout << "use shared b:" << std::endl;
    std::shared_ptr<Flyweight> flyweight_b(FlyweightFactory::Instance()->GetFlyweight('b'));
    flyweight_b->Operation(3);

    std::cout << std::endl;
    std::cout << "use unshared c:" << std::endl;
    std::shared_ptr<Flyweight> flyweight_c1(new UnsharedConcreteFlyweight('c'));
    flyweight_c1->Operation(4);

    std::cout << std::endl;
    std::cout << "use unshared c:" << std::endl;
    std::shared_ptr<Flyweight> flyweight_c2(new UnsharedConcreteFlyweight('c'));
    flyweight_c2->Operation(5);

    return 0;
}