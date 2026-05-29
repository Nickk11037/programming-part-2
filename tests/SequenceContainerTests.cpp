#include "../include/Record.hpp"

#include <cassert>
#include <deque>
#include <list>

int main() {
    std::list<ProductRecord> listProducts;

    listProducts.push_back(
        {1, "Phone", "Electronics", 500, 3}
    );

    assert(!listProducts.empty());

    std::deque<ProductRecord> dequeProducts;

    dequeProducts.push_back(
        {2, "Milk", "Food", 3, 0}
    );

    assert(dequeProducts.at(0).stock == 0);

    return 0;
}