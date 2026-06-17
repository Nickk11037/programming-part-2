```cpp
#include "ProductManager.h"
#include <iostream>

int main() {

    ProductManager manager;

    manager.loadDemoData();

    manager.showProducts();

    manager.showCategories();

    manager.showProductsByCategory("Electronics");

    manager.showZeroStockFrequency();

    manager.insertProduct(
        Product(
            21,
            "Headphones",
            "Electronics",
            75.0,
            10
        )
    );

    manager.removeProduct(3);

    std::cout << "\nLookup ID 5: ";

    if (manager.containsProduct(5))
        std::cout << "Found\n";
    else
        std::cout << "Not found\n";

    manager.demonstrateUnorderedSettings();

    manager.adapterDemo();

    manager.runTests();

    return 0;
}
