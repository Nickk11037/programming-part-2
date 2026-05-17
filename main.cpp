#include "public/ReadingArray.h"
#include "public/SimplePtr.h"

#include <iostream>
#include <memory>

int main() {

    std::cout << "----- ReadingArray -----\n";

    ReadingArray arr(3);

    arr[0].setValue(12.5);
    arr[1].setValue(20.0);
    arr[2].setValue(31.7);

    for (int i = 0; i < arr.getSize(); i++) {
        arr[i].print();
    }

    std::cout << "\n----- SimplePtr -----\n";

    SimplePtr<Sensor> ptr(
        new Sensor(1, 99.9)
    );

    ptr->print();

    std::cout << "\n----- unique_ptr -----\n";

    std::unique_ptr<Sensor> uniqueSensor(
        new Sensor(2, 55.5)
    );

    uniqueSensor->print();

    std::unique_ptr<Sensor[]> sensorArray(
        new Sensor[2]
    );

    sensorArray[0].setValue(100);
    sensorArray[1].setValue(200);

    sensorArray[0].print();
    sensorArray[1].print();

    std::cout << "\n----- Custom deleter -----\n";

    auto deleter = [](Sensor* s) {
        std::cout << "Custom delete called\n";
        delete s;
    };

    std::unique_ptr<Sensor, decltype(deleter)>
        customPtr(
            new Sensor(3, 77.7),
            deleter
        );

    customPtr->print();

    std::cout << "\n----- shared_ptr -----\n";

    std::shared_ptr<Sensor> shared1 =
        std::make_shared<Sensor>(4, 88.8);

    std::shared_ptr<Sensor> shared2 = shared1;

    std::cout << "Use count: "
              << shared1.use_count()
              << "\n";

    std::cout << "\n----- weak_ptr -----\n";

    std::shared_ptr<SensorNode> node1 =
        std::make_shared<SensorNode>(1);

    std::shared_ptr<SensorNode> node2 =
        std::make_shared<SensorNode>(2);

    node1->next = node2;
    node2->prev = node1;

    std::cout << "Cycle fixed with weak_ptr\n";

    return 0;
}