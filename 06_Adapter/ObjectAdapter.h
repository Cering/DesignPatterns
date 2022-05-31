#pragma once
#include <memory>
#include "Target.h"
#include "Adaptee.h"

class ObjectAdapter : public Target
{
public:
    virtual void Request() override;
public:
    ObjectAdapter();
    virtual ~ObjectAdapter() = default;
private:
    std::shared_ptr<Adaptee> _adaptee;
};