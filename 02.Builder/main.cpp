#include <memory>
#include "Director.h"
#include "ConcreteBuilder1.h"
#include "ConcreteBuilder2.h"

int main()
{
    std::shared_ptr<Builder> builder1(new ConcreteBuilder1());
    std::shared_ptr<Builder> builder2(new ConcreteBuilder2());
    std::shared_ptr<Director> director(new Director());

    director->SetBuilder(builder1.get());
    std::shared_ptr<Product> product1(director->Construct());
    product1->Print();

    director->SetBuilder(builder2.get());
    std::shared_ptr<Product> product2(director->Construct());
    product2->Print();

    return 0;
}