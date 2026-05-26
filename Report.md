# Laboratory Work №10  
## Generic Indexed and Windowed Array Utilities

---

# 1. Topic

Function templates in C++ for indexed access and subrange operations on one-dimensional arrays.

---

# 2. Purpose

The purpose of this laboratory work is to learn how to create and use function templates, work with references, implement generic algorithms for arrays, and test them using Google Test.

---

# 3. Assignment Statement

Implement a small header-only utility module with template functions for working with arrays.

Required tasks:

- implement `nthElement()` for indexed access with bounds checking;
- implement `rotateThree()` for cyclic permutation of three values;
- implement `windowMax()` for finding the maximum value inside a selected subrange;
- create a demonstration program;
- create unit tests using Google Test;
- build the project using CMake.

---

# 4. Brief Theoretical Notes

Function templates allow creating generic functions that work with different data types.

Template argument deduction allows the compiler to automatically determine the required type from the passed arguments.

References are used to modify original variables without copying them.

Template definitions are usually placed in header files because the compiler must see the full implementation during compilation.

---

# 5. Variant Specification

Variant 4: Generic Indexed and Windowed Array Utilities.

The program must provide:

- indexed access to array elements;
- cyclic permutation of values;
- search for the maximum element in a selected array window.

---

# 6. Project Structure

```text
lab10/
│
├── CMakeLists.txt
├── main.cpp
│
├── include/
│   └── variant_utils.h
│
└── tests/
    └── test_variant_utils.cpp
```

---

# 7. Description of Files

## `variant_utils.h`

This file contains all template function implementations.

Functions:
- `nthElement()` — returns an array element by index;
- `rotateThree()` — cyclically swaps three values;
- `windowMax()` — searches for the maximum element inside a subrange.

The file is header-only because template implementations must remain visible to the compiler.

---

## `main.cpp`

This file demonstrates how the implemented template functions work.

The program:
- creates an integer array;
- calls `nthElement()`;
- calls `rotateThree()`;
- calls `windowMax()`;
- prints all results.

---

## `test_variant_utils.cpp`

This file contains unit tests written with Google Test.

The tests verify:
- indexed access correctness;
- cyclic permutation correctness;
- maximum search correctness.

Functions are tested with:
- `int`
- `std::string`

This proves that templates work with different data types.

---

## `CMakeLists.txt`

This file configures project building using CMake.

It:
- sets the C++ standard;
- connects the include directory;
- creates executables;
- enables testing support.

---

# 8. Program Output

```text
nthElement: 3
rotateThree: 2 3 1
windowMax: 9
```

---

# 9. Output Explanation

## `nthElement: 3`

The array is:

```text
{1, 5, 3, 9, 2}
```

The function requests the element with index `2`.

Element positions:

```text
0 → 1
1 → 5
2 → 3
3 → 9
4 → 2
```

At index `2` the value is `3`, therefore the function returns `3`.

---

## `rotateThree: 2 3 1`

Initial values:

```text
a = 1
b = 2
c = 3
```

After cyclic rotation:
- `a` receives old `b`;
- `b` receives old `c`;
- `c` receives old `a`.

Result:

```text
2 3 1
```

---

## `windowMax: 9`

The selected subrange is:

```text
{5, 3, 9}
```

The function compares all values inside this range and finds the largest one.

The maximum value is `9`.

---

# 10. Unit Tests

The tests verify:
- correct indexed access;
- correct cyclic permutation;
- correct maximum search;
- support for multiple data types.

---

# 11. Conclusions

During this laboratory work, generic template functions for array processing were implemented.

The work demonstrated:
- function templates;
- references;
- exception handling;
- generic algorithms;
- unit testing with Google Test.

The implemented functions successfully work with different data types such as `int` and `std::string`.