#pragma once
#include <memory>
#include "Product.h"

enum ProductType
{
    PRODUCT_TYPE_1 = 1,
    PRODUCT_TYPE_2
};

class Creator
{
public:
    virtual std::shared_ptr<Product> FactoryMethod(ProductType type) = 0;
public:
    virtual ~Creator() = default;
protected:
    Creator() = default;
};