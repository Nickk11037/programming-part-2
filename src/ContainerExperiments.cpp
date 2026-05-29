#include "../include/ContainerExperiments.hpp"

#include <deque>
#include <forward_list>
#include <list>

void listExperiment() {
    std::list<ProductRecord> products;

    products.push_back({1, "Phone", "Electronics", 500, 4});
    products.push_back({2, "Keyboard", "Electronics", 80, 0});
    products.push_back({3, "Milk", "Food", 3, 15});

    auto it = products.begin();
    ++it;

    products.insert(it, {4, "Mouse", "Electronics", 40, 8});

    for (const auto& product : products) {
        product.print();
    }

    std::cout << std::endl;

    for (const auto& product : products) {
        if (product.stock == 0) {
            std::cout << "Zero stock: ";
            product.print();
        }
    }

    int count = 0;

    for (const auto& product : products) {
        if (product.category == "Electronics") {
            count++;
        }
    }

    std::cout << "Electronics count: "
              << count << std::endl;

    products.pop_front();
}

void dequeExperiment() {
    std::deque<ProductRecord> products;

    products.push_back({1, "Book", "Education", 15, 10});
    products.push_back({2, "Tablet", "Electronics", 700, 0});
    products.push_back({3, "Bread", "Food", 2, 20});

    products.insert(
        products.begin() + 1,
        {4, "Camera", "Electronics", 900, 5}
    );

    for (size_t i = 0; i < products.size(); i++) {
        products[i].print();
    }

    std::cout << "First element:" << std::endl;
    products.at(0).print();

    products.erase(products.begin());
}

void forwardListExperiment() {
    std::forward_list<ProductRecord> products;

    products.push_front({1, "TV", "Electronics", 1200, 3});
    products.push_front({2, "Apple", "Food", 1, 0});
    products.push_front({3, "Notebook", "Education", 5, 12});

    auto it = products.begin();

    products.insert_after(
        it,
        {4, "Chair", "Furniture", 40, 7}
    );

    for (const auto& product : products) {
        product.print();
    }

    products.erase_after(products.begin());
}

void sharedPtrExperiment() {
    std::list<SharedProductRecord> products;

    SharedProductRecord product;

    product.id = 1;
    product.name = std::make_shared<std::string>("Laptop");
    product.category = "Electronics";
    product.price = 1500;
    product.stock = 2;

    products.push_back(product);

    for (const auto& p : products) {
        p.print();
    }
}

void uniquePtrExperiment() {
    std::deque<UniqueProductRecord> products;

    UniqueProductRecord product;

    product.id = 1;
    product.name = "Monitor";
    product.category = "Electronics";
    product.price = std::make_unique<double>(300);
    product.stock = 5;

    products.push_back(std::move(product));

    for (const auto& p : products) {
        p.print();
    }
}