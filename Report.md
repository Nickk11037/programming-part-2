# 📘 Report: C++ Output and Formatting

## 🔹 Introduction

Output formatting in C++ is used to display data clearly in the console or files. There are both traditional and modern ways to format output.

---

## 🔹 1. std::cout and <iomanip>

The classic method uses `std::cout` with manipulators from `<iomanip>`.

**Examples of tools:**

* `std::setw()` — width
* `std::setprecision()` — precision
* `std::left`, `std::right` — alignment

**Pros:**

* Works in all C++ versions
  **Cons:**
* Less readable, more complex syntax

---

## 🔹 2. Boolean Formatting

By default:

* `true → 1`
* `false → 0`

With `std::boolalpha`:

* `true → true`
* `false → false`

Makes output easier to understand.

---

## 🔹 3. File Output

Using `std::ofstream`, programs can write formatted reports into files.

Used for:

* titles
* aligned values
* summaries

---

## 🔹 4. std::format (C++20)

Modern formatting with `{}` placeholders.

**Example:**

```cpp
std::format("{:<10}{:.2f}", "Value:", 3.14);
```

**Pros:**

* Clean and readable
  **Cons:**
* Requires C++20

---

## 🔹 5. std::print / std::println (C++23)

Even simpler output functions.

**Pros:**

* Very readable
* Combines formatting + output
  **Cons:**
* Requires C++23

---

## 🔹 Conclusion

Traditional tools (`std::cout`) are reliable but less convenient.
Modern tools (`std::format`, `std::println`) improve readability and simplify formatting, but require newer compilers.

