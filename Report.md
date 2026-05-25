# Lab 11
## Variant 4 — Service Ticket Queue

## Purpose of the work

The purpose of this laboratory work is to study templates in C++,
template specialization, non-type template parameters,
and implementation of fixed-capacity data structures
using raw arrays.

---

## Task description

In this laboratory work, a fixed-capacity service queue
was implemented. The queue stores service tickets
and works using the circular queue principle.

The main class of the project is FixedQueue<T, N>,
where T defines the type of stored elements
and N defines the maximum queue capacity.

The queue supports adding and removing elements,
checking whether the queue is empty or full,
and obtaining the first queue element.

The project also includes additional helper classes:
QueueItem<Key, Value>, QueueReport<T>,
and TicketValidator<T>.

A full specialization of TicketValidator<int>
was implemented to validate numeric ticket identifiers
in the range from 1 to 9999.

The project was implemented without using STL containers
such as vector, list, deque, map, set, or array.
Only raw arrays and standard value members were used.

---

## Testing

The program contains unit tests for:
- enqueue operation;
- dequeue operation;
- empty queue check;
- full queue check;
- ticket validation.

The tests confirm correct queue behavior
and correct operation of template specialization.

---

## Compiler investigation

Several template instantiations were compared,
including FixedQueue<int, 5>
and FixedQueue<std::string, 5>.

The sizes of instantiated classes were compared
using sizeof(...).

The generated compiler structures were inspected
using clang AST dump and record layout dump.

The investigation demonstrates that different template
arguments generate different concrete types.

---

## Conclusion

During this laboratory work,
a template-based fixed-capacity queue was implemented.

The work demonstrates:
- usage of class templates;
- usage of non-type template parameters;
- template specialization;
- circular queue logic;
- raw-array-based storage;
- compiler-generated template instantiations.

All requirements of the selected variant
were successfully completed.