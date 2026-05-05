#include <iostream>
#include "Engineer.h"
#include "SeniorEngineer.h"
#include "Manager.h"

int main() {
    const int N = 3;

    Employee* items[N];

    items[0] = new Engineer("Alice", 1000, 3);
    items[1] = new SeniorEngineer("Bob", 1500, 5, 500);
    items[2] = new Manager("Charlie", 2000, 10);

    for (int i = 0; i < N; i++) {
        items[i]->work();
        std::cout << "Salary: " << items[i]->calculateSalary() << "\n\n";
    }

    for (int i = 0; i < N; i++) {
        delete items[i];
    }

    return 0;
}