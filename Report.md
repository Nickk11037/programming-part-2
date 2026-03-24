# Student Grade Tracking Project

## Overview
This project demonstrates a simple C++ application organized using CMake.  
The goal is to implement a small library that processes student grades and to structure the project correctly.

The program calculates:
- average grade
- minimum grade
- maximum grade

The focus of the assignment is not algorithm complexity, but proper project structure and tools usage.

---

## Project Structure


variant_4
├── CMakeLists.txt
├── vcpkg.json
├── app/
│ ├── CMakeLists.txt
│ └── main.cpp
├── lib/
│ ├── CMakeLists.txt
│ ├── grades.h
│ └── grades.cpp
└── tests/
├── CMakeLists.txt
└── test_grades.cpp


---

## ⚙️ Implementation Steps

### 1. Simple Executable
A basic executable program was created using `main.cpp`.

It initializes a list of student grades and calls functions to process them.

---

### 2. Library Creation
The core logic was moved into a separate library (`lib/` folder).

Functions implemented:
- `getAverage()` – calculates the average value
- `getMin()` – finds the minimum value
- `getMax()` – finds the maximum value

This improves code organization and reusability.

---

### 3. Unit Testing
Tests were added using GoogleTest (`tests/` folder).

Each function is tested separately to ensure correctness:
- average calculation
- minimum value
- maximum value

---

### 4. Modular CMake Structure
The project is divided into modules using `add_subdirectory()`:
- `app` – executable
- `lib` – library
- `tests` – test suite

This structure makes the project scalable and easier to maintain.

---

### 5. External Library Integration
The `fmt` library was added using vcpkg.

It is used for formatted output instead of standard `cout`.

Example:

fmt::print("Average: {}\n", value);


---

## Example Output


Average: 84
Min: 67
Max: 100


---

## Conclusion

In this project:
- A C++ project was created
- Core logic was separated into a library
- Knowledge from lections helpred with solving problem
