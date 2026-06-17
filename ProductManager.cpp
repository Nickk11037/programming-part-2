```cpp
#include "ProductManager.h"
#include <iostream>

void ProductManager::loadDemoData() {
    std::vector<Product> data = {
        {1,"Laptop","Electronics",1200,5},
        {2,"Mouse","Electronics",25,15},
        {3,"Keyboard","Electronics",45,0},
        {4,"Monitor","Electronics",300,8},
        {5,"Phone","Electronics",900,0},

        {6,"T-Shirt","Clothing",20,12},
        {7,"Jeans","Clothing",50,7},
        {8,"Jacket","Clothing",80,0},
        {9,"Sneakers","Clothing",100,10},

        {10,"Bread","Food",2,25},
        {11,"Milk","Food",3,18},
        {12,"Cheese","Food",6,0},
        {13,"Chocolate","Food",4,30},

        {14,"Book","Education",15,20},
        {15,"Notebook","Education",5,40},
        {16,"Pen","Education",1,0},

        {17,"Chair","Furniture",60,6},
        {18,"Table","Furniture",150,3},
        {19,"Lamp","Furniture",35,0},
        {20,"Shelf","Furniture",90,2}
    };

    for (const auto& p : data) {
        productsById[p.id] = p;
    }

    buildIndexes();
}

void ProductManager::buildIndexes() {
    categories.clear();
    productsByCategory.clear();
    unorderedIndex.clear();

    for (const auto& pair : productsById) {
        const Product& p = pair.second;

        categories.insert(p.category);
        productsByCategory.insert({p.category, p});
        unorderedIndex[p.id] = p;
    }
}

void ProductManager::showProducts() const {
    std::cout << "\nPRODUCTS:\n";

    for (const auto& pair : productsById) {
        const Product& p = pair.second;

        std::cout
            << p.id << " | "
            << p.name << " | "
            << p.category << " | "
            << p.price << " | "
            << p.stock << '\n';
    }
}

void ProductManager::showCategories() const {
    std::cout << "\nCATEGORIES:\n";

    for (const auto& category : categories) {
        std::cout << category << '\n';
    }
}

void ProductManager::showProductsByCategory(
    const std::string& category) const {

    std::cout << "\nCATEGORY: " << category << '\n';

    auto range = productsByCategory.equal_range(category);

    for (auto it = range.first; it != range.second; ++it) {
        std::cout << it->second.name << '\n';
    }
}

void ProductManager::showZeroStockFrequency() const {
    int zeroStock = 0;

    for (const auto& pair : productsById) {
        if (pair.second.stock == 0)
            ++zeroStock;
    }

    std::cout << "\nZERO STOCK PRODUCTS: "
              << zeroStock << '\n';
}

void ProductManager::insertProduct(
    const Product& product) {

    productsById[product.id] = product;

    categories.insert(product.category);

    productsByCategory.insert(
        {product.category, product});

    unorderedIndex[product.id] = product;

    recentProducts.push(product);

    std::cout << "\nInserted product "
              << product.name << '\n';
}

void ProductManager::removeProduct(int id) {

    auto it = productsById.find(id);

    if (it == productsById.end()) {
        std::cout << "\nProduct not found.\n";
        return;
    }

    productsById.erase(it);

    buildIndexes();

    std::cout << "\nProduct removed.\n";
}

bool ProductManager::containsProduct(int id) const {
    return unorderedIndex.find(id)
        != unorderedIndex.end();
}

void ProductManager::demonstrateUnorderedSettings() {

    std::cout << "\nUNORDERED MAP SETTINGS\n";

    std::cout << "Buckets before reserve: "
              << unorderedIndex.bucket_count()
              << '\n';

    unorderedIndex.reserve(100);

    std::cout << "Buckets after reserve: "
              << unorderedIndex.bucket_count()
              << '\n';

    std::cout
        << "reserve() increases bucket count "
        << "and may trigger rehash.\n";
}

void ProductManager::adapterDemo() {

    std::cout << "\nQUEUE ADAPTER DEMO\n";

    std::queue<Product> copy = recentProducts;

    while (!copy.empty()) {
        std::cout
            << copy.front().name
            << '\n';

        copy.pop();
    }
}

void ProductManager::runTests() {

    std::cout << "\nTESTS\n";

    std::cout
        << "Contains ID 5: "
        << (containsProduct(5)
            ? "YES" : "NO")
        << '\n';

    std::cout
        << "Contains ID 100: "
        << (containsProduct(100)
            ? "YES" : "NO")
        << '\n';
}
