#pragma once
#include <memory>

class Subject;

class Observer
{
public:
    virtual void Update(std::shared_ptr<Subject> changed_subject) = 0;
    virtual void Print() const = 0;
public:
    virtual ~Observer() = default;
protected:
    Observer() = default;
};