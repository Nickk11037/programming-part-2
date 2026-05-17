# Lab 12

## Topic
Resource management in C++ using RAII and smart pointers.

---

## Objective
Learn how to work with:
- dynamic memory
- Rule of Three
- Rule of Five
- RAII
- smart pointers in C++

---

## Selected Variant
Variant 4:
Sensor readings — ReadingArray — SensorBuffer — Sensor/Stream

---

## Project Structure

lab12/
├── CMakeLists.txt
├── main.cpp
├── public/
│ ├── ReadingArray.h
│ ├── SimplePtr.h
│ └── DomainTypes.h
├── private/
│ ├── ReadingArray.cpp
│ └── DomainTypes.cpp
├── tests/
│ └── test_resource_management.cpp
└── REPORT.md

---

## Description of Classes

### Sensor
The Sensor class stores:
- sensor id
- sensor value

The class has methods for changing and displaying values.

---

### ReadingArray
ReadingArray is a dynamic array of Sensor objects.

Memory is allocated using:
- new[]
- delete[]

The class supports:
- copy constructor
- copy assignment operator
- move constructor
- move assignment operator
- destructor

This prevents:
- shallow copy
- memory leaks
- double delete problems

---

### SimplePtr
SimplePtr is a simple smart pointer created manually.

The class demonstrates RAII:
memory is automatically released in the destructor.

Copying is prohibited.

---

## Rule of Three

The following methods were implemented:
- destructor
- copy constructor
- copy assignment operator

They are needed because the class works with dynamic memory.

---

## Rule of Five

Additionally implemented:
- move constructor
- move assignment operator

Move semantics allow transferring ownership without copying memory.

---

## unique_ptr

std::unique_ptr was used:
- for one Sensor object
- for an array of Sensor objects

This pointer automatically frees memory.

---

## Custom Deleter

A custom deleter was created for unique_ptr.

It prints a message before deleting the object.

---

## shared_ptr

std::shared_ptr was used to demonstrate shared ownership.

Several pointers can own one object.

The use_count() method shows the number of owners.

---

## weak_ptr

std::weak_ptr was used in SensorNode.

It prevents cyclic references between objects.

---

## Cycle Problem

Two SensorNode objects reference each other.

Using only shared_ptr would create a memory leak.

weak_ptr solves this problem because it does not increase the reference counter.

---

## Test Results

The program successfully demonstrates:
- manual dynamic arrays
- Rule of Three
- Rule of Five
- RAII
- unique_ptr
- shared_ptr
- weak_ptr
- custom deleter

The program compiles and runs correctly.

---

## Conclusion

RAII and smart pointers make C++ programs safer.

Automatic resource management helps avoid:
- memory leaks
- double delete
- dangling pointers

Modern C++ smart pointers are more reliable than manual memory management.