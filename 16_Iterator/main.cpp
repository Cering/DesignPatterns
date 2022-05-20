#include <iostream>
#include <string>
#include "ConcreteAggregate.h"

int main()
{
    int data_int[5] = {0, 1, 2};
    std::shared_ptr<Aggregate<int>> agg_int(new ConcreteAggregate<int>(data_int, sizeof(data_int)/sizeof(int)));
    std::shared_ptr<Iterator<int>> it_int(agg_int->CreateIterator());
    std::cout << "Iterator for int array" << std::endl;
    for(it_int->First(); !it_int->IsDone(); it_int->Next())
    {
        std::cout << "[" << it_int.get() << "] " << it_int->CurrentItem() << std::endl;
    }

    std::cout << std::endl;

    std::string data_string[] = {
        "abc",
        "123",
    };
    std::shared_ptr<Aggregate<std::string>> agg_string(new ConcreteAggregate<std::string>(data_string, sizeof(data_string)/sizeof(std::string)));
    std::shared_ptr<Iterator<std::string>> it_string(agg_string->CreateIterator());
    std::cout << "Iterator for string array" << std::endl;
    for(it_string->First(); !it_string->IsDone(); it_string->Next())
    {
        std::cout << "[" << it_string.get() << "] " << it_string->CurrentItem() << std::endl;
    }

    it_string->CurrentItem();

    return 0;
}