#pragma once
#include "Builder.h"

class Director
{
public:
    void SetBuilder(Builder* builder);
    Product* Construct();
public:
    Director();
private:
    Builder* _builder;
};