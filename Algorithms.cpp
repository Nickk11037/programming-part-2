#include "Algorithms.h"

#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

class ValueFunctor
{
private:
    double total;

public:
    ValueFunctor() : total(0) {}

    void operator()(const Product& p)
    {
        total += p.price * p.stock;
    }

    double getTotal() const
    {
        return total;
    }
};

void printProducts(const vector<Product>& products)
{
    for (const auto& p : products)
    {
        cout << p.id << " | "
             << p.name << " | "
             << p.category << " | "
             << p.price << " | "
             << p.stock << endl;
    }

    cout << endl;
}

void runAlgorithms(vector<Product> products)
{
    cout << "INITIAL DATA\n";
    printProducts(products);

    auto zeroStock = find_if(products.begin(), products.end(),
        [](const Product& p)
        {
            return p.stock == 0;
        });

    if (zeroStock != products.end())
    {
        cout << "Product with zero stock: "
             << zeroStock->name << "\n\n";
    }

    int electronicsCount = count_if(
        products.begin(),
        products.end(),
        [](const Product& p)
        {
            return p.category == "Electronics";
        });

    cout << "Electronics count: "
         << electronicsCount << "\n\n";

    bool anyOutOfStock = any_of(
        products.begin(),
        products.end(),
        [](const Product& p)
        {
            return p.stock == 0;
        });

    cout << "Any out of stock: "
         << (anyOutOfStock ? "Yes" : "No")
         << "\n\n";

    sort(products.begin(), products.end(),
        [](const Product& a, const Product& b)
        {
            if (a.category == b.category)
                return a.price < b.price;

            return a.category < b.category;
        });

    cout << "SORTED DATA\n";
    printProducts(products);

    vector<Product> availableProducts;

    copy_if(
        products.begin(),
        products.end(),
        back_inserter(availableProducts),
        [](const Product& p)
        {
            return p.stock > 0;
        });

    vector<double> values(products.size());

    transform(
        products.begin(),
        products.end(),
        values.begin(),
        [](const Product& p)
        {
            return p.price * p.stock;
        });

    double totalValue = accumulate(
        values.begin(),
        values.end(),
        0.0);

    cout << "Total stock value: "
         << totalValue << "\n\n";

    auto minmaxPair =
        minmax_element(
            products.begin(),
            products.end(),
            [](const Product& a, const Product& b)
            {
                return a.price < b.price;
            });

    cout << "Cheapest: "
         << minmaxPair.first->name
         << "\n";

    cout << "Most expensive: "
         << minmaxPair.second->name
         << "\n\n";

    vector<double> prefix(values.size());

    partial_sum(
        values.begin(),
        values.end(),
        prefix.begin());

    cout << "Partial sums:\n";

    for (double x : prefix)
    {
        cout << x << " ";
    }

    cout << "\n\n";

    ValueFunctor functor;

    for_each(
        products.begin(),
        products.end(),
        ref(functor));

    cout << "Functor total value: "
         << functor.getTotal()
         << "\n\n";

    products.erase(
        remove_if(
            products.begin(),
            products.end(),
            [](const Product& p)
            {
                return p.stock == 0;
            }),
        products.end());

    cout << "After remove_if:\n";
    printProducts(products);

#if __cplusplus >= 202002L
    ranges::sort(products,
        [](const Product& a, const Product& b)
        {
            return a.id < b.id;
        });
#endif
}