```cpp
#pragma once

#include <iterator>
#include <stdexcept>
#include <concepts>
#include <ranges>

template<typename T>
class SimpleForwardList
{
private:
    struct Node
    {
        T data;
        Node* next;

        Node(const T& value)
            : data(value), next(nullptr)
        {
        }
    };

    Node* head_;
    std::size_t size_;

public:

    class iterator
    {
    private:
        Node* current_;

    public:
        using iterator_category = std::forward_iterator_tag;
        using value_type = T;
        using difference_type = std::ptrdiff_t;
        using pointer = T*;
        using reference = T&;

        iterator(Node* ptr = nullptr)
            : current_(ptr)
        {
        }

        reference operator*() const
        {
            return current_->data;
        }

        pointer operator->() const
        {
            return &current_->data;
        }

        iterator& operator++()
        {
            current_ = current_->next;
            return *this;
        }

        iterator operator++(int)
        {
            iterator temp(*this);
            ++(*this);
            return temp;
        }

        bool operator==(const iterator& other) const
        {
            return current_ == other.current_;
        }

        bool operator!=(const iterator& other) const
        {
            return !(*this == other);
        }

        friend class SimpleForwardList;
    };

    class const_iterator
    {
    private:
        const Node* current_;

    public:
        using iterator_category = std::forward_iterator_tag;
        using value_type = const T;
        using difference_type = std::ptrdiff_t;
        using pointer = const T*;
        using reference = const T&;

        const_iterator(const Node* ptr = nullptr)
            : current_(ptr)
        {
        }

        reference operator*() const
        {
            return current_->data;
        }

        pointer operator->() const
        {
            return &current_->data;
        }

        const_iterator& operator++()
        {
            current_ = current_->next;
            return *this;
        }

        bool operator==(const const_iterator& other) const
        {
            return current_ == other.current_;
        }

        bool operator!=(const const_iterator& other) const
        {
            return !(*this == other);
        }
    };

    SimpleForwardList()
        : head_(nullptr),
          size_(0)
    {
    }

    ~SimpleForwardList()
    {
        clear();
    }

    void push_front(const T& value)
    {
        Node* node = new Node(value);
        node->next = head_;
        head_ = node;
        ++size_;
    }

    void clear()
    {
        while (head_)
        {
            Node* temp = head_;
            head_ = head_->next;
            delete temp;
        }

        size_ = 0;
    }

    bool empty() const
    {
        return size_ == 0;
    }

    std::size_t size() const
    {
        return size_;
    }

    iterator begin()
    {
        return iterator(head_);
    }

    iterator end()
    {
        return iterator(nullptr);
    }

    const_iterator begin() const
    {
        return const_iterator(head_);
    }

    const_iterator end() const
    {
        return const_iterator(nullptr);
    }

    iterator insert_after(iterator pos, const T& value)
    {
        if (!pos.current_)
            throw std::runtime_error("Invalid iterator");

        Node* node = new Node(value);

        node->next = pos.current_->next;
        pos.current_->next = node;

        ++size_;

        return iterator(node);
    }

    iterator erase_after(iterator pos)
    {
        if (!pos.current_ || !pos.current_->next)
            throw std::runtime_error("Nothing to erase");

        Node* victim = pos.current_->next;

        pos.current_->next = victim->next;

        delete victim;

        --size_;

        return iterator(pos.current_->next);
    }

    T& front()
    {
        if (empty())
            throw std::runtime_error("List is empty");

        return head_->data;
    }

    const T& front() const
    {
        if (empty())
            throw std::runtime_error("List is empty");

        return head_->data;
    }
};

static_assert(std::forward_iterator<
    typename SimpleForwardList<int>::iterator>);

