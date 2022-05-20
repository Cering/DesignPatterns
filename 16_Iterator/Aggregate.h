#pragma once
#include <memory>
#include "Iterator.h"

template <class Item>
class Aggregate
{
public:
    virtual std::shared_ptr<Iterator<Item>> CreateIterator() = 0;
    virtual Item& Get(int pos) = 0;
    virtual int Count() const = 0;
public:
    virtual ~Aggregate() = default;
};