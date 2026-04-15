# Hospital Administration System

## Introduction
The purpose of this laboratory work is to create a simple model of a hospital administration system using object-oriented programming in C++. The main focus of the task is to understand how classes interact with each other and how aggregation works in practice.

---

## Objective
The objective of this assignment is to design and implement several classes that represent real-world entities in a hospital:
- Hospital
- Doctor
- Nurse
- Patient
- Ward

It is also required to show aggregation relationships between these classes and organize the project into multiple files using CMake.

---

## Task Description
In this work, it was necessary to analyze the hospital system and identify its main components. Each component was implemented as a separate class.

The following relationships were created:
- Hospital aggregates doctors, nurses, and wards
- Ward aggregates patients

This means that objects can exist independently. For example, a patient can exist without being assigned to a ward.

Each class was implemented in separate header (.h) and source (.cpp) files. A demonstration program was written in main.cpp, and unit tests were created using Google Test.

---

## Aggregation
Aggregation is a type of relationship where one class contains references to other objects, but does not control their lifetime.

In this project:
- Hospital stores pointers to Doctor, Nurse, and Ward
- Ward stores pointers to Patient

Pointers are used to show that these objects exist independently.

---

## Class Description

### Hospital
This is the main class of the system. It stores:
- a list of doctors
- a list of nurses
- a list of wards

It provides methods to add these objects.

### Doctor
Represents a doctor. Stores:
- name
- specialization

### Nurse
Represents a nurse. Stores:
- name

### Patient
Represents a patient. Stores:
- name

### Ward
Represents a hospital ward. Stores:
- ward number
- list of patients

---

## Implementation Details
In this implementation, standard library containers (like vector) were not used. Instead, simple static arrays and counters were applied.

Example:
Doctor* doctors[100];
int doctorCount;

This approach was chosen because STL containers were not covered in the course.

---

## Demonstration Program
The main.cpp file demonstrates how the system works:
- objects are created
- relationships are established
- data is printed to the console

This shows that the system behaves correctly.

---

## Testing
Unit testing was implemented using Google Test.

The test checks whether a doctor is correctly added to the hospital and verifies the number of stored doctors.

---

## Conclusion
In this laboratory work, a basic hospital administration system was successfully implemented using object-oriented programming.

The main concepts covered:
- class design
- aggregation
- multi-file project structure
- basic unit testing

This task helped to better understand how to model real-world systems in C++.