#include <memory>
#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"

int main()
{
    std::shared_ptr<AbstractFactory> factory(new ConcreteFactory1());
    // std::shared_ptr<AbstractFactory> factory(new ConcreteFactory2());

    std::shared_ptr<AbstractProductA> product_a(factory->CreateProductA());
    std::shared_ptr<AbstractProductB> product_b(factory->CreateProductB());
    product_a->print();
    product_b->print();

    std::shared_ptr<AbstractProductA> product_aa(factory->CreateProductA());
    std::shared_ptr<AbstractProductB> product_bb(factory->CreateProductB());
    product_aa->print();
    product_bb->print();

    return 0;
}