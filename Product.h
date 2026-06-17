#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

struct Product
{
    int id;
    std::string name;
    std::string category;
    double price;
    int stock;
};

#endif