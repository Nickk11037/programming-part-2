#include <iostream>
#include "Employee.h"
#include "Engineer.h"
#include "SeniorEngineer.h"
#include "Manager.h"

int main() {
    Employee e("Alice", 1, 3000);
    Engineer eng("Bob", 2, 4000, "Backend", 3);
    SeniorEngineer seng("Charlie", 3, 6000, "AI", 7, 5, 1500);
    Manager m("Diana", 4, 7000, 10, "IT");

    std::cout << "\n--- INFO ---\n";
    e.printInfo();
    eng.printInfo();
    seng.printInfo();
    m.printInfo();

    std::cout << "\n--- SIZEOF ---\n";
    std::cout << "Employee: " << sizeof(Employee) << std::endl;
    std::cout << "Engineer: " << sizeof(Engineer) << std::endl;
    std::cout << "SeniorEngineer: " << sizeof(SeniorEngineer) << std::endl;
    std::cout << "Manager: " << sizeof(Manager) << std::endl;

    return 0;
}