#include <iostream>
#include "ConcreteCreator.h"
#include "ConcreteProduct1.h"
#include "ConcreteProduct2.h"

std::shared_ptr<Product> ConcreteCreator::FactoryMethod(ProductType type)
{
    std::shared_ptr<Product> ret(nullptr);
    switch(type)
    {
        case PRODUCT_TYPE_1:
            ret.reset(new ConcreteProduct1("product type 1"));
            break;
        case PRODUCT_TYPE_2:
            ret.reset(new ConcreteProduct2(2));
            break;
        default:
            break;
    }
    std::cout << "[" << this << "] ConcreteCreator::FactoryMethod() create product [" << ret.get() << "] with type " << type << std::endl;
    return ret;
}