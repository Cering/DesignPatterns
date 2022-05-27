#include <memory>
#include "ConcreteClass.h"

int main()
{
    std::shared_ptr<AbstractClass> obj(new ConcreteClass());
    obj->TemplateMethod();

    return 0;
}