```cpp
#pragma once
#include <string>

struct Product
{
    int id{};
    std::string name;
    std::string category;
    double price{};
    int stock{};

    Product() = default;

    Product(int i,
            const std::string& n,
            const std::string& c,
            double p,
            int s)
        : id(i),
          name(n),
          category(c),
          price(p),
          stock(s)
    {
    }

    bool operator==(const Product& other) const
    {
        return id == other.id;
    }
};

