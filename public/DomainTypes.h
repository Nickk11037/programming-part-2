#pragma once

#include <memory>
#include <string>

class Sensor {
private:
    int id;
    double value;

public:
    Sensor(int i = 0, double v = 0);

    void setValue(double v);
    double getValue() const;

    void print() const;
};

class SensorNode {
public:
    int id;

    std::shared_ptr<SensorNode> next;
    std::weak_ptr<SensorNode> prev;

    SensorNode(int i);
};