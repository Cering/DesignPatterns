#pragma once
#include <string>

class Product
{
public:
    void Print();
    void SetPartA(const std::string& a);
    void SetPartB(const std::string& b);
    void SetPartC(const std::string& c);
public:
    Product();
private:
    int _id;
    std::string _part_a;
    std::string _part_b;
    std::string _part_c;
private:
    static int _next_id;
};