#ifndef RECORD_HPP
#define RECORD_HPP

#include <iostream>
#include <memory>
#include <string>

struct ProductRecord {
    int id;
    std::string name;
    std::string category;
    double price;
    int stock;

    ProductRecord();
    ProductRecord(
        int id,
        const std::string& name,
        const std::string& category,
        double price,
        int stock
    );

    void print() const;
};

struct SharedProductRecord {
    int id;
    std::shared_ptr<std::string> name;
    std::string category;
    double price;
    int stock;

    void print() const;
};

struct UniqueProductRecord {
    int id;
    std::string name;
    std::string category;
    std::unique_ptr<double> price;
    int stock;

    void print() const;
};

#endif