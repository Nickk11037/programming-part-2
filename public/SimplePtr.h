#pragma once

template <typename T>
class SimplePtr {
private:
    T* ptr;

public:
    explicit SimplePtr(T* p = nullptr)
        : ptr(p) {}

    ~SimplePtr() {
        delete ptr;
    }

    SimplePtr(const SimplePtr&) = delete;
    SimplePtr& operator=(const SimplePtr&) = delete;

    T* operator->() {
        return ptr;
    }

    T& operator*() {
        return *ptr;
    }

    T* get() {
        return ptr;
    }
};