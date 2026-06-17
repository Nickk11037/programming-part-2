````md
# Laboratory Work

## Topic

Custom STL-like Containers:
SimpleForwardList<T> and SimpleVector<T>

## Objective

To implement custom generic containers, iterators,
dynamic memory management and STL algorithms.

## Variant

4. Product Catalog

## Domain Record

```cpp
struct Product
{
    int id;
    std::string name;
    std::string category;
    double price;
    int stock;
};
````

## Required Operations

* Find products with zero stock
* Count products of a specified category
* Add a new product

## Node Structure

```cpp
template<typename T>
struct Node
{
    T data;
    Node* next;
};
```

## Iterator Implementation

The iterator stores a pointer to the current node.

Supported operations:

* operator*
* operator->
* operator++
* operator==
* operator!=

A const_iterator is implemented for read-only traversal.

## insert_after Example

```cpp
list.insert_after(it, value);
```

## erase_after Example

```cpp
list.erase_after(it);
```

## SimpleVector Implementation

SimpleVector uses dynamic memory allocation.

Implemented methods:

* reserve()
* resize()
* push_back()
* emplace_back()
* pop_back()
* clear()

Rule of Five is fully implemented.

## size() vs capacity()

| Function   | Description               |
| ---------- | ------------------------- |
| size()     | Number of stored elements |
| capacity() | Allocated memory capacity |

## Pointer Iterators

SimpleVector uses raw pointers as iterators.

```cpp
begin()
end()
```

This allows usage of standard STL algorithms.

## Algorithms Used

| Algorithm      | Purpose         |
| -------------- | --------------- |
| std::for_each  | Output elements |
| std::find_if   | Search product  |
| std::count_if  | Count category  |
| std::remove_if | Remove products |

## GoogleTest Results

All tests passed successfully.

Example:

```text
[==========] Running 10 tests
[  PASSED  ] 10 tests
```

## Program Output

```text
All products:
1 Laptop Electronics 1200 10
2 Mouse Electronics 25 0
3 Desk Furniture 200 5
4 Chair Furniture 150 0

Products with zero stock:
Mouse
Chair

Electronics count: 2
```

## Conclusion

Custom containers SimpleForwardList<T> and
SimpleVector<T> were successfully implemented.

The project demonstrates custom iterators,
dynamic memory management and compatibility
with STL algorithms.

