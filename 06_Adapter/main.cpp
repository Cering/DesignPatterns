#include <memory>
#include "ClassAdapter.h"
#include "ObjectAdapter.h"

int main()
{
    std::shared_ptr<Target> class_adapter(new ClassAdapter);
    std::shared_ptr<Target> object_adapter(new ObjectAdapter);
    class_adapter->Request();
    object_adapter->Request();

    return 0;
}