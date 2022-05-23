#pragma once
#include <iostream>
#include <memory>

class Memento;

class State
{
public:
    State();
    friend std::ostream& operator <<(std::ostream& os, const State& s);
public:
    int   var_int;
    char  var_char;
    float var_float;
};

class Originator
{
public:
    void SetInt(int i);
    void SetChar(char c);
    void SetFloat(float f);
    void PrintState() const;
    void SetMemento(std::shared_ptr<Memento> m);
    std::shared_ptr<Memento> CreateMemento();
private:
    State _state;
};