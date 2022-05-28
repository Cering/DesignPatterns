#include <iostream>
#include <vector>
#include "ConcreteElementA.h"
#include "ConcreteElementB.h"
#include "ConcreteVisitor1.h"
#include "ConcreteVisitor2.h"

int main()
{
    std::vector<std::shared_ptr<Element>> object_structure;
    object_structure.emplace_back(std::shared_ptr<Element>(new ConcreteElementA(1)));
    object_structure.emplace_back(std::shared_ptr<Element>(new ConcreteElementB('a')));
    object_structure.emplace_back(std::shared_ptr<Element>(new ConcreteElementB('A')));

    std::cout << "use visitor1:" << std::endl;
    std::shared_ptr<Visitor> visitor1(new ConcreteVisitor1());
    for(const auto& obj : object_structure)
        obj->Accept(visitor1);

    std::cout << std::endl;
    std::cout << "use visitor2:" << std::endl;
    std::shared_ptr<Visitor> visitor2(new ConcreteVisitor2());
    for(const auto& obj : object_structure)
        obj->Accept(visitor2);

    return 0;
}