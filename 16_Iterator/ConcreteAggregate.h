#pragma once
#include "Aggregate.h"
#include "ConcreteIterator.h"

template <class Item>
class ConcreteAggregate : public Aggregate<Item>
{
public:
    virtual std::shared_ptr<Iterator<Item>> CreateIterator() override;
    virtual Item& Get(int pos) override;
    virtual int Count() const override;
public:
    ConcreteAggregate(Item* data, int len);
    virtual ~ConcreteAggregate() = default;
private:
    Item* _data;
    int _length;
};

template <class Item>
ConcreteAggregate<Item>::ConcreteAggregate(Item* data, int len) : _data(data), _length(len)
{
}

template <class Item>
std::shared_ptr<Iterator<Item>> ConcreteAggregate<Item>::CreateIterator()
{
    return std::shared_ptr<Iterator<Item>>(new ConcreteIterator<Item>(this));
}

template <class Item>
Item& ConcreteAggregate<Item>::Get(int pos)
{
    return _data[pos];
}

template <class Item>
int ConcreteAggregate<Item>::Count() const
{
    return _length;
}