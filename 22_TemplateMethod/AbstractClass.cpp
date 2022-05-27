#include <iostream>
#include "AbstractClass.h"

void AbstractClass::TemplateMethod()
{
    std::cout << "[" << this << "] AbstractClass::TemplateMethod() will call PrimitiveOperation1()" << std::endl;
    PrimitiveOperation1();
    std::cout << "[" << this << "] AbstractClass::TemplateMethod() will call PrimitiveOperation2()" << std::endl;
    PrimitiveOperation2();
}