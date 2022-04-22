#include "ConcreteCreator.h"
#include "ConcreteProduct1.h"
#include "ConcreteProduct2.h"

Product* ConcreteCreator::FactoryMethod(int type)
{
    Product* ret = nullptr;
    switch(type)
    {
        case 1:
            ret = new ConcreteProduct1("product type 1");
            break;
        case 2:
            ret = new ConcreteProduct2(2);
            break;
        default:
            break;
    }
    return ret;
}