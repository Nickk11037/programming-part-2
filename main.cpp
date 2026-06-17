```cpp id="v1d4am"
#include <iostream>
#include <algorithm>

#include "Product.h"
#include "SimpleForwardList.h"
#include "SimpleVector.h"

int main()
{
    SimpleVector<Product> products;

    products.emplace_back(1, "Laptop", "Electronics", 1200.0, 10);
    products.emplace_back(2, "Mouse", "Electronics", 25.0, 0);
    products.emplace_back(3, "Desk", "Furniture", 200.0, 5);
    products.emplace_back(4, "Chair", "Furniture", 150.0, 0);

    std::cout << "All products:\n";

    std::for_each(products.begin(),
                  products.end(),
                  [](const Product& p)
                  {
                      std::cout
                          << p.id << " "
                          << p.name << " "
                          << p.category << " "
                          << p.price << " "
                          << p.stock << '\n';
                  });

    std::cout << "\nProducts with zero stock:\n";

    std::for_each(products.begin(),
                  products.end(),
                  [](const Product& p)
                  {
                      if (p.stock == 0)
                      {
                          std::cout
                              << p.name
                              << '\n';
                      }
                  });

    int electronicsCount =
        std::count_if(products.begin(),
                      products.end(),
                      [](const Product& p)
                      {
                          return p.category == "Electronics";
                      });

    std::cout
        << "\nElectronics count: "
        << electronicsCount
        << "\n";

    auto found =
        std::find_if(products.begin(),
                     products.end(),
                     [](const Product& p)
                     {
                         return p.name == "Desk";
                     });

    if (found != products.end())
    {
        std::cout
            << "\nFound product: "
            << found->name
            << "\n";
    }

    auto newEnd =
        std::remove_if(products.begin(),
                       products.end(),
                       [](const Product& p)
                       {
                           return p.stock == 0;
                       });

    products.resize(newEnd - products.begin());

    std::cout << "\nAfter remove_if:\n";

    for (const auto& p : products)
    {
        std::cout
            << p.name
            << " "
            << p.stock
            << '\n';
    }

    SimpleForwardList<Product> list;

    list.push_front(
        Product(10,
                "Phone",
                "Electronics",
                700,
                8));

    list.push_front(
        Product(11,
                "Monitor",
                "Electronics",
                300,
                2));

    std::cout << "\nForward List:\n";

    for (const auto& p : list)
    {
        std::cout
            << p.name
            << '\n';
    }

    return 0;
}

