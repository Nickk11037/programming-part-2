#include "Cover.h"

Cover::Cover(const std::string& material, const std::string& color)
    : material(material), color(color) {}

std::string Cover::getMaterial() const {
    return material;
}

std::string Cover::getColor() const {
    return color;
}