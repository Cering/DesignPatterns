#include <memory>
#include "ConcreteCreator.h"

int main()
{
    std::shared_ptr<Creator> creator(new ConcreteCreator());

    std::shared_ptr<Product> product0(creator->FactoryMethod(0));
    if(product0)
        product0->Print();

    std::shared_ptr<Product> product1(creator->FactoryMethod(1));
    if(product1)
        product1->Print();

    std::shared_ptr<Product> product2(creator->FactoryMethod(2));
    if(product2)
        product2->Print();

    return 0;
}