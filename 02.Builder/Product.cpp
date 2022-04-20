#include <iostream>
#include "Product.h"

int Product::_next_id = 0;

Product::Product() : _id(_next_id++), _part_a("null"), _part_b("null"), _part_c("null")
{
}

void Product::Print()
{
    std::cout << "Product[" << _id << "]: "
              << _part_a << " + " 
              << _part_b << " + " 
              << _part_c << std::endl;
}

void Product::SetPartA(const std::string& a)
{
    _part_a = a;
}

void Product::SetPartB(const std::string& b)
{
    _part_b = b;
}

void Product::SetPartC(const std::string& c)
{
    _part_c = c;
}