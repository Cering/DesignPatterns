#include <iostream>
#include "ClassAdapter.h"
#include "ObjectAdapter.h"

int main()
{
    std::cout << "class adapter:" << std::endl;
    std::shared_ptr<Target> class_adapter(new ClassAdapter);
    class_adapter->Request();

    std::cout << std::endl;
    std::cout << "object adapter:" << std::endl;
    std::shared_ptr<Target> object_adapter(new ObjectAdapter);
    object_adapter->Request();

    return 0;
}