#include <iostream>
#include <memory>
#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"

int main()
{
    std::cout << "use factory1:" << std::endl;
    std::shared_ptr<AbstractFactory> factory1(new ConcreteFactory1());
    std::shared_ptr<AbstractProductA> product_a1(factory1->CreateProductA());
    std::shared_ptr<AbstractProductB> product_b1(factory1->CreateProductB());
    product_a1->Print();
    product_b1->Print();

    std::cout << std::endl;
    std::cout << "use factory2:" << std::endl;
    std::shared_ptr<AbstractFactory> factory2(new ConcreteFactory2());
    std::shared_ptr<AbstractProductA> product_a2(factory2->CreateProductA());
    std::shared_ptr<AbstractProductB> product_b2(factory2->CreateProductB());
    product_a2->Print();
    product_b2->Print();

    return 0;
}