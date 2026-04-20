#pragma once
#include <string>

class Cover {
private:
    std::string material;
    std::string color;

public:
    Cover(const std::string& material = "", const std::string& color = "");

    std::string getMaterial() const;
    std::string getColor() const;
};