#include <iostream>
#include "Context.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"
#include "ConcreteStrategyC.h"

int main()
{
    std::cout << "use strategy A:" << std::endl;
    Context context(std::shared_ptr<Strategy>(new ConcreteStrategyA()));
    context.ContextInterface();

    std::cout << std::endl;
    std::cout << "use strategy B:" << std::endl;
    context.SetStrategy(std::shared_ptr<Strategy>(new ConcreteStrategyB()));
    context.ContextInterface();

    std::cout << std::endl;
    std::cout << "use strategy C:" << std::endl;
    context.SetStrategy(std::shared_ptr<Strategy>(new ConcreteStrategyC()));
    context.ContextInterface();

    return 0;
}