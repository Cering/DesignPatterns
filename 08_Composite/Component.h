#pragma once
#include <memory>

class Component
{
public:
    virtual void Operation();
    virtual void Add(std::shared_ptr<Component> item);
    virtual void Remove(std::shared_ptr<Component> item);
    virtual std::shared_ptr<Component> GetChild(int id);
public:
    Component();
protected:
    int _id;
private:
    static int _next_id;
};