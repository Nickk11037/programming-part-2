```cpp
#pragma once

#include <utility>
#include <stdexcept>
#include <algorithm>

template<typename T>
class SimpleVector
{
private:
    T* data_;
    std::size_t size_;
    std::size_t capacity_;

public:

    using iterator = T*;
    using const_iterator = const T*;

    SimpleVector()
        : data_(nullptr),
          size_(0),
          capacity_(0)
    {
    }

    ~SimpleVector()
    {
        delete[] data_;
    }

    SimpleVector(const SimpleVector& other)
        : data_(nullptr),
          size_(other.size_),
          capacity_(other.capacity_)
    {
        data_ = new T[capacity_];

        for (std::size_t i = 0; i < size_; ++i)
        {
            data_[i] = other.data_[i];
        }
    }

    SimpleVector& operator=(const SimpleVector& other)
    {
        if (this == &other)
            return *this;

        delete[] data_;

        size_ = other.size_;
        capacity_ = other.capacity_;

        data_ = new T[capacity_];

        for (std::size_t i = 0; i < size_; ++i)
        {
            data_[i] = other.data_[i];
        }

        return *this;
    }

    SimpleVector(SimpleVector&& other) noexcept
        : data_(other.data_),
          size_(other.size_),
          capacity_(other.capacity_)
    {
        other.data_ = nullptr;
        other.size_ = 0;
        other.capacity_ = 0;
    }

    SimpleVector& operator=(SimpleVector&& other) noexcept
    {
        if (this == &other)
            return *this;

        delete[] data_;

        data_ = other.data_;
        size_ = other.size_;
        capacity_ = other.capacity_;

        other.data_ = nullptr;
        other.size_ = 0;
        other.capacity_ = 0;

        return *this;
    }

    void reserve(std::size_t newCapacity)
    {
        if (newCapacity <= capacity_)
            return;

        T* newData = new T[newCapacity];

        for (std::size_t i = 0; i < size_; ++i)
        {
            newData[i] = std::move(data_[i]);
        }

        delete[] data_;

        data_ = newData;
        capacity_ = newCapacity;
    }

    void resize(std::size_t newSize)
    {
        if (newSize > capacity_)
        {
            reserve(newSize);
        }

        if (newSize > size_)
        {
            for (std::size_t i = size_; i < newSize; ++i)
            {
                data_[i] = T{};
            }
        }

        size_ = newSize;
    }

    void push_back(const T& value)
    {
        if (size_ >= capacity_)
        {
            reserve(capacity_ == 0 ? 1 : capacity_ * 2);
        }

        data_[size_++] = value;
    }

    template<typename... Args>
    void emplace_back(Args&&... args)
    {
        if (size_ >= capacity_)
        {
            reserve(capacity_ == 0 ? 1 : capacity_ * 2);
        }

        data_[size_++] = T(std::forward<Args>(args)...);
    }

    void pop_back()
    {
        if (size_ > 0)
        {
            --size_;
        }
    }

    void clear()
    {
        size_ = 0;
    }

    T& operator[](std::size_t index)
    {
        return data_[index];
    }

    const T& operator[](std::size_t index) const
    {
        return data_[index];
    }

    T& at(std::size_t index)
    {
        if (index >= size_)
            throw std::out_of_range("Index out of range");

        return data_[index];
    }

    const T& at(std::size_t index) const
    {
        if (index >= size_)
            throw std::out_of_range("Index out of range");

        return data_[index];
    }

    iterator begin()
    {
        return data_;
    }

    iterator end()
    {
        return data_ + size_;
    }

    const_iterator begin() const
    {
        return data_;
    }

    const_iterator end() const
    {
        return data_ + size_;
    }

    std::size_t size() const
    {
        return size_;
    }

    std::size_t capacity() const
    {
        return capacity_;
    }

    bool empty() const
    {
        return size_ == 0;
    }
};

