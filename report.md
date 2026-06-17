# STL Associative Containers - Product Catalog

## Topic

Associative Containers in C++ STL.

## Objective

To study ordered and unordered associative containers, grouping of records, indexing, frequency counting, and container adapters.

## Individual Variant

**Product Catalog**

Record fields:

* id
* name
* category
* price
* stock

## Record Structure

```cpp
struct Product {
    int id;
    std::string name;
    std::string category;
    double price;
    int stock;
};
```

## Test Data

The program uses 20 product records from several categories:

* Electronics
* Clothing
* Food
* Education
* Furniture

Some products have stock equal to zero for frequency analysis.

## Containers Used

| Container                           | Purpose              |
| ----------------------------------- | -------------------- |
| map<int, Product>                   | Ordered index by ID  |
| unordered_map<int, Product>         | Fast lookup by ID    |
| set<string>                         | Unique categories    |
| unordered_multimap<string, Product> | Grouping by category |
| queue<Product>                      | Container adapter    |

## Indexes and Grouping

* Products are indexed by ID using `map`.
* Categories are stored in a `set`.
* Products are grouped by category using `unordered_multimap`.

## Lookup and Counting

Examples demonstrated:

* Search by product ID.
* Check if a key exists.
* Count products with zero stock.

## Insertion and Removal

The program demonstrates:

* Insertion of a new product.
* Removal of a product by ID.
* Automatic rebuilding of indexes.

## Ordered vs Unordered Containers

Ordered containers store elements in sorted order and usually use balanced trees.

Unordered containers use hash tables and provide faster average lookup operations.

## Rehash and Bucket Structure

`unordered_map::reserve()` is demonstrated.

Increasing capacity may increase the number of buckets and trigger rehashing, which redistributes elements among buckets.

## Custom Callable Object

```cpp
struct ProductHash {
    size_t operator()(const Product& p) const {
        return std::hash<int>()(p.id);
    }
};
```

The callable object demonstrates Extension 1.

## Container Adapter

A `queue<Product>` is used to store recently added products.

The adapter demonstrates FIFO processing.

## Test Results

Tests verify:

* Successful lookup of existing IDs.
* Detection of missing IDs.
* Correct insertion and removal operations.
* Correct frequency counting.

## Conclusion

The project demonstrates practical usage of STL associative containers, grouping, indexing, frequency analysis, hashing, and container adapters. Ordered and unordered containers were compared and tested successfully.
