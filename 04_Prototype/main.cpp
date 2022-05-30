#include <iostream>
#include <memory>
#include "ConcretePrototype1.h"
#include "ConcretePrototype2.h"

int main()
{
    std::cout << "prototype1 clone:" << std::endl;
    std::shared_ptr<Prototype> prototype1(new ConcretePrototype1("proto_type_1"));
    prototype1->Print();
    std::shared_ptr<Prototype> prototype11(prototype1->Clone());
    prototype11->Print();

    std::cout << std::endl;
    std::cout << "prototype2 clone:" << std::endl;
    std::shared_ptr<Prototype> prototype2(new ConcretePrototype2(2));
    prototype2->Print();
    std::shared_ptr<Prototype> prototype22(prototype2->Clone());
    prototype22->Print();

    return 0;
}