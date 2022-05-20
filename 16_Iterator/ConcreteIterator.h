#pragma once
#include <iostream>
#include <stdlib.h>
#include "Iterator.h"
#include "Aggregate.h"

template <class Item>
class ConcreteIterator : public Iterator<Item>
{
public:
    virtual void First() override;
    virtual void Next() override;
    virtual bool IsDone() const override;
    virtual Item CurrentItem() const override;
public:
    ConcreteIterator(Aggregate<Item>* agg);
    virtual ~ConcreteIterator() = default;
private:
    Aggregate<Item>* _aggregate;
    int _current;
};

template <class Item>
ConcreteIterator<Item>::ConcreteIterator(Aggregate<Item>* agg) : _aggregate(agg), _current(0)
{
}

template <class Item>
void ConcreteIterator<Item>::First()
{
    _current = 0;
}

template <class Item>
void ConcreteIterator<Item>::Next()
{
    _current++;
}

template <class Item>
bool ConcreteIterator<Item>::IsDone() const
{
    return _current >= _aggregate->Count();
}

template <class Item>
Item ConcreteIterator<Item>::CurrentItem() const
{
    if(IsDone())
    {
        std::cout << "[" << this << "] CurrentItem() failed, abort" << std::endl;
        abort();
    }
    return _aggregate->Get(_current);
}