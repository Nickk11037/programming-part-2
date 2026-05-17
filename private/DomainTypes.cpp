#include "../public/DomainTypes.h"
#include <iostream>

Sensor::Sensor(int i, double v)
    : id(i), value(v) {}

void Sensor::setValue(double v) {
    value = v;
}

double Sensor::getValue() const {
    return value;
}

void Sensor::print() const {
    std::cout << "Sensor " << id
              << " value: "
              << value << "\n";
}

SensorNode::SensorNode(int i)
    : id(i) {}