#include <iostream>
#include "Director.h"
#include "ConcreteBuilder1.h"
#include "ConcreteBuilder2.h"

int main()
{
    std::shared_ptr<Director> director(new Director());

    std::cout << "use builder1:" << std::endl;
    std::shared_ptr<Builder> builder1(new ConcreteBuilder1());
    director->SetBuilder(builder1);
    std::shared_ptr<Product> product1(director->Construct());
    product1->Print();

    std::cout << std::endl;
    std::cout << "use builder2:" << std::endl;
    std::shared_ptr<Builder> builder2(new ConcreteBuilder2());
    director->SetBuilder(builder2);
    std::shared_ptr<Product> product2(director->Construct());
    product2->Print();

    return 0;
}