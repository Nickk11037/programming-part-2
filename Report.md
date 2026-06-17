# Lab Work: STL Algorithms, Lambdas and Functors

## Objective

Develop a C++ application for processing a product catalog using STL containers, algorithms, lambda expressions, functors, and numeric operations.

## Record Structure

```cpp
struct Product
{
    int id;
    std::string name;
    std::string category;
    double price;
    int stock;
};
```

## Data

The program stores product information in:

```cpp
std::vector<Product>
```

The dataset contains 20 products.

Product stock quantities are generated using:

```cpp
std::generate
std::uniform_int_distribution
```

## Algorithms Used

1. std::find_if
2. std::count_if
3. std::any_of
4. std::sort
5. std::copy_if
6. std::transform
7. std::remove_if
8. std::accumulate
9. std::minmax_element
10. std::generate
11. std::iota
12. std::shuffle
13. std::partial_sum
14. std::for_each

## Lambda Expressions

The project uses multiple lambda expressions:

* Search products with zero stock.
* Count products by category.
* Sort products by category and price.
* Calculate product values.
* Remove unavailable products.

## Stateful Functor

```cpp
class ValueFunctor
```

The functor accumulates the total inventory value.

## Numeric Processing

```cpp
std::partial_sum
```

is used to calculate cumulative product values.

## C++20 Fragment

```cpp
std::ranges::sort(...)
```

is included when the compiler supports C++20.

## Conclusion

The developed application demonstrates practical use of STL containers, algorithms, lambda expressions, functors, random generation, and numeric operations for processing a product catalog.
