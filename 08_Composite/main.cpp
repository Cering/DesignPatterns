#include <memory>
#include <iostream>
#include "Composite.h"
#include "Leaf.h"

int main()
{
    std::cout << "initial:" << std::endl;
    std::shared_ptr<Component> root_0(new Composite());
    std::shared_ptr<Component> leaf_1(new Leaf());
    std::shared_ptr<Component> child_2(new Composite());
    std::shared_ptr<Component> child_3(new Composite());
    std::shared_ptr<Component> leaf_4(new Leaf());
    std::shared_ptr<Component> leaf_5(new Leaf());
    std::shared_ptr<Component> leaf_6(new Leaf());
    std::shared_ptr<Component> child_7(new Composite());
    std::shared_ptr<Component> leaf_8(new Leaf());
    root_0->Add(leaf_1);
    root_0->Add(child_2);
    root_0->Add(child_3);
    child_2->Add(leaf_4);
    child_2->Add(leaf_5);
    child_3->Add(leaf_6);
    child_3->Add(child_7);
    child_7->Add(leaf_8);

    std::cout << std::endl;
    std::cout << "origin operation:" << std::endl;
    root_0->Operation();

    std::cout << std::endl;
    std::cout << "remove leaf_8 and operation:" << std::endl;
    root_0->Remove(leaf_8);
    root_0->Operation();

    std::cout << std::endl;
    std::cout << "remove child_2 and operation:" << std::endl;
    root_0->Remove(child_2);
    root_0->Operation();

    std::cout << std::endl;
    std::cout << "get child_3 and operation:" << std::endl;
    std::shared_ptr<Component> tmp = root_0->GetChild(3);
    if(tmp)
        tmp->Operation();

    return 0;
}