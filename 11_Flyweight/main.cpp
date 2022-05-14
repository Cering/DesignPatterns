#include "FlyweightFactory.h"
#include "UnsharedConcreteFlyweight.h"

int main()
{
    std::shared_ptr<Flyweight> flyweight_a1(FlyweightFactory::Instance()->GetFlyweight('a'));
    std::shared_ptr<Flyweight> flyweight_a2(FlyweightFactory::Instance()->GetFlyweight('a'));
    std::shared_ptr<Flyweight> flyweight_b(FlyweightFactory::Instance()->GetFlyweight('b'));
    std::shared_ptr<Flyweight> flyweight_c1(new UnsharedConcreteFlyweight('c'));
    std::shared_ptr<Flyweight> flyweight_c2(new UnsharedConcreteFlyweight('c'));

    flyweight_a1->Operation(1);
    flyweight_a2->Operation(2);
    flyweight_b->Operation(3);
    flyweight_c1->Operation(4);
    flyweight_c2->Operation(5);

    return 0;
}