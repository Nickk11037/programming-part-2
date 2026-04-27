# Laboratory Work  
## Single Inheritance in C++

---

## 1. Topic  
Study and implementation of single inheritance in C++.

---

## 2. Objective  
The objective of this work is to learn how to build a class hierarchy using single inheritance where each level has its own data and behavior.

---

## 3. Problem Statement  
It is required to implement a class hierarchy for company employees:

Employee → Engineer → SeniorEngineer,  
with a separate Manager branch.

The hierarchy must have at least 3 levels of depth, include branching, and demonstrate correct use of constructors and method overriding.

---

## 4. Theoretical Background  

Inheritance in C++ allows creating new classes based on existing ones.  
The base class provides common properties, while derived classes extend them.

Public inheritance represents an "is-a" relationship:
- Engineer is an Employee  
- SeniorEngineer is an Engineer  

Main concepts used:
- base class (Employee)
- derived classes (Engineer, Manager)
- multi-level inheritance (SeniorEngineer)
- method overriding using override
- initializer lists
- virtual functions

---

## 5. UML Diagram  

Added succsesfully

---

## 6. Key Implementation Details  

Each class has its own fields:
- Employee: name, id, salary  
- Engineer: specialization, experience  
- SeniorEngineer: projectsLed, bonus  
- Manager: teamSize, department  

Constructors use initializer lists:

Engineer(...) : Employee(name, id, salary), ...


Method overriding is implemented:

void printInfo() const override;


SeniorEngineer is declared as:

class SeniorEngineer final


---

## 7. Example Usage  

Objects of different hierarchy levels are created in main():
- Employee  
- Engineer  
- SeniorEngineer  
- Manager  

Each object calls its own printInfo() method.

---

## 8. sizeof Analysis  

The following are printed:

sizeof(Employee)
sizeof(Engineer)
sizeof(SeniorEngineer)
sizeof(Manager)


Derived classes have larger sizes because:
- new fields are added  
- virtual functions add a vtable pointer  

---

## 9. Conclusion  

The hierarchy is correctly implemented:
- single inheritance is used  
- depth of 3 levels is achieved  
- branching is present  
- each class has its own state  
- override, initializer lists, and final are used  

The program compiles and works correctly.