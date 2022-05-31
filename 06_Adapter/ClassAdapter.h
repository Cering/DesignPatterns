#pragma once
#include "Target.h"
#include "Adaptee.h"

class ClassAdapter : public Target, private Adaptee
{
public:
    virtual void Request() override;
public:
    virtual ~ClassAdapter() = default;
};