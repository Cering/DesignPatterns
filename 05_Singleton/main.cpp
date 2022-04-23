#include <stdlib.h>
#include "Singleton.h"

int main(int argc, char** argv)
{
    int type = 0;
    if(argc >= 2)
    {
        type = atoi(argv[1]);
    }
    Singleton* instance = Singleton::Instance(type);
    instance->Print();


    Singleton* instance0 = Singleton::Instance();
    instance0->Print();
    Singleton* instance1 = Singleton::Instance(1);
    instance1->Print();
    Singleton* instance2 = Singleton::Instance(2);
    instance2->Print();

    return 0;
}