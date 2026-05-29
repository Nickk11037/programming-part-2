#include "../include/Record.hpp"

ProductRecord::ProductRecord()
    : id(0), price(0), stock(0) {}

ProductRecord::ProductRecord(
    int id,
    const std::string& name,
    const std::string& category,
    double price,
    int stock
)
    : id(id),
      name(name),
      category(category),
      price(price),
      stock(stock) {}

void ProductRecord::print() const {
    std::cout
        << id << " "
        << name << " "
        << category << " "
        << price << " "
        << stock << std::endl;
}

void SharedProductRecord::print() const {
    std::cout
        << id << " "
        << *name << " "
        << category << " "
        << price << " "
        << stock << std::endl;
}

void UniqueProductRecord::print() const {
    std::cout
        << id << " "
        << name << " "
        << category << " "
        << *price << " "
        << stock << std::endl;
}