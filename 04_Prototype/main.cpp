#include <memory>
#include "ConcretePrototype1.h"
#include "ConcretePrototype2.h"

int main()
{
    std::shared_ptr<Prototype> prototype1(new ConcretePrototype1("proto_type_1"));
    std::shared_ptr<Prototype> prototype11(prototype1->Clone());
    prototype1->Print();
    prototype11->Print();

    std::shared_ptr<Prototype> prototype2(new ConcretePrototype2(2));
    std::shared_ptr<Prototype> prototype22(prototype2->Clone());
    prototype2->Print();
    prototype22->Print();

    return 0;
}