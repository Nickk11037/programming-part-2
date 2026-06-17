#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <numeric>

#include "Product.h"
#include "Algorithms.h"

using namespace std;

class StockGenerator
{
private:
    mt19937 gen;
    uniform_int_distribution<> dist;

public:
    StockGenerator()
        : gen(random_device{}()),
          dist(0, 50)
    {
    }

    int operator()()
    {
        return dist(gen);
    }
};

int main()
{
    vector<Product> products;

    vector<int> ids(20);

    iota(ids.begin(), ids.end(), 1);

    vector<int> stocks(20);

    generate(
        stocks.begin(),
        stocks.end(),
        StockGenerator());

    vector<string> categories =
    {
        "Electronics",
        "Food",
        "Books",
        "Clothes"
    };

    for (int i = 0; i < 20; i++)
    {
        Product p;

        p.id = ids[i];
        p.name = "Product" + to_string(i + 1);
        p.category = categories[i % categories.size()];
        p.price = 10 + i * 5;
        p.stock = stocks[i];

        products.push_back(p);
    }

    products[3].stock = 0;
    products[10].stock = 0;

    shuffle(
        products.begin(),
        products.end(),
        mt19937(random_device{}()));

    runAlgorithms(products);

    return 0;
}