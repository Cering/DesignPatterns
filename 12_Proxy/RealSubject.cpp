#include <iostream>
#include "RealSubject.h"

void RealSubject::Request()
{
    std::cout << "[" << this << "] RealSubject:Request()" << std::endl;
}