#include "ConcreteMediator.h"

int main()
{
    std::shared_ptr<ConcreteMediator> mediator(new ConcreteMediator());
    mediator->Test();
    return 0;
}