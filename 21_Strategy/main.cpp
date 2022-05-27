#include <iostream>
#include "Context.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"
#include "ConcreteStrategyC.h"

int main()
{
    Context context(std::shared_ptr<Strategy>(new ConcreteStrategyA()));
    context.ContextInterface();

    std::cout << std::endl;
    context.SetStrategy(std::shared_ptr<Strategy>(new ConcreteStrategyB()));
    context.ContextInterface();

    std::cout << std::endl;
    context.SetStrategy(std::shared_ptr<Strategy>(new ConcreteStrategyC()));
    context.ContextInterface();

    return 0;
}