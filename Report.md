# LAB 14 — Sequence Containers

## Aim

The purpose of the work is to study standard sequence containers in C++, perform insertion, deletion, traversal, searching and counting operations, and compare container behavior.

---

# Task

Create a product catalog with fields:

* id
* name
* category
* price
* stock

Implement:

* search for products with zero stock;
* count products by category;
* insertion into the middle of a container.

Use:

* `std::list`
* `std::deque`
* `std::forward_list`

Also perform experiments with:

* `std::shared_ptr`
* `std::unique_ptr`

---

# Implementation

A structure `ProductRecord` was created for storing product information.

The program demonstrates:

* insertion and deletion of elements;
* traversal with iterators and range-for;
* searching and counting without `<algorithm>`;
* indexed access for `std::deque`.

Separate experiments with `shared_ptr` and `unique_ptr` were implemented.

---

# Container Comparison

| Container         | Features                 |
| ----------------- | ------------------------ |
| std::list         | Fast insertion in middle |
| std::deque        | Indexed access           |
| std::forward_list | Low memory usage         |

---

# Conclusion

During the laboratory work sequence containers and iterators were studied.

Operations with insertion, deletion, traversal, searching and counting were implemented.

The differences between containers and smart pointers were analyzed.
