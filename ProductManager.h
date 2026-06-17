```cpp
#ifndef PRODUCTMANAGER_H
#define PRODUCTMANAGER_H

#include "Product.h"
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_multimap>
#include <queue>
#include <vector>

struct ProductHash {
    size_t operator()(const Product& p) const {
        return std::hash<int>()(p.id);
    }
};

class ProductManager {
private:
    std::map<int, Product> productsById;
    std::set<std::string> categories;
    std::unordered_multimap<std::string, Product> productsByCategory;
    std::unordered_map<int, Product> unorderedIndex;

    std::queue<Product> recentProducts;

public:
    void loadDemoData();

    void buildIndexes();

    void showProducts() const;

    void showCategories() const;

    void showProductsByCategory(const std::string& category) const;

    void showZeroStockFrequency() const;

    void insertProduct(const Product& product);

    void removeProduct(int id);

    bool containsProduct(int id) const;

    void demonstrateUnorderedSettings();

    void adapterDemo();

    void runTests();
};

#endif
