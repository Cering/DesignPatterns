#pragma once
#include "Builder.h"

class Director
{
public:
    void SetBuilder(std::shared_ptr<Builder> b);
    std::shared_ptr<Product> Construct();
public:
    Director();
private:
    std::shared_ptr<Builder> _builder;
};