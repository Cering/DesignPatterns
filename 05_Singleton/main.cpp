#include <iostream>
#include <stdlib.h>
#include "Singleton.h"

int main(int argc, char** argv)
{
    int type = 0;
    if(argc >= 2)
    {
        type = atoi(argv[1]);
    }
    std::cout << "singleton with argv type: " << type << std::endl;
    std::shared_ptr<Singleton> instance(Singleton::Instance((SingletonType)type));
    instance->Print();

    std::cout << std::endl;
    std::cout << "singleton with type: default" << std::endl;
    std::shared_ptr<Singleton> instance0(Singleton::Instance());
    instance0->Print();

    std::cout << std::endl;
    std::cout << "singleton with type: 1" << std::endl;
    std::shared_ptr<Singleton> instance1(Singleton::Instance(SINGLETON_TYPE_1));
    instance1->Print();

    std::cout << std::endl;
    std::cout << "singleton with type: 2" << std::endl;
    std::shared_ptr<Singleton> instance2(Singleton::Instance(SINGLETON_TYPE_2));
    instance2->Print();

    return 0;
}