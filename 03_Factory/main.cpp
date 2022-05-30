#include <iostream>
#include "ConcreteCreator.h"

int main()
{
    std::shared_ptr<Creator> creator(new ConcreteCreator());

    std::shared_ptr<Product> product1(creator->FactoryMethod(PRODUCT_TYPE_1));
    if(product1)
        product1->Print();

    std::cout << std::endl;
    std::shared_ptr<Product> product2(creator->FactoryMethod(PRODUCT_TYPE_2));
    if(product2)
        product2->Print();

    std::cout << std::endl;
    std::shared_ptr<Product> product3(creator->FactoryMethod((ProductType)3));
    if(product3)
        product3->Print();

    return 0;
}