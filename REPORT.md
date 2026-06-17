
---

# REPORT.md

```md
# Report


## Project

Library Accounting system written in C++.


## Implementation

The program stores books and provides:

- adding books
- counting available books
- searching by year
- finding oldest book


## Testing

Six unit tests were implemented.

Tests are executed using ctest.


## CI/CD

Two workflows were created:

1. Parallel workflow

Contains multiple jobs:
- build
- tests
- sanitizers
- quality checks
- documentation


2. Sequential workflow

Uses one job with sequential steps.


## Comparison

Parallel workflow:

- faster execution
- more jobs
- more complex debugging


Sequential workflow:

- slower execution
- easier debugging
- simpler configuration


## Technical issue

Problem:
Sanitizer build failed because sanitizer flags were missing.

Fix:
Added AddressSanitizer and UndefinedBehaviorSanitizer flags in CMake.


## Conclusion

The project satisfies all requirements:
CMake build, testing, sanitizers, static analysis,
format checking and documentation.