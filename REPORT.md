# Lab 08 – Inheritance, Polymorphism, Abstract Classes

## Topic
Company employees hierarchy.

## Objective
To study inheritance, abstract classes, polymorphism, and dynamic dispatch in C++.

## Problem Statement
Implement a class hierarchy:
Employee → Engineer → SeniorEngineer,
and a separate branch Manager.

## Theoretical Background
Inheritance allows creating new classes based on existing ones.
Abstract classes contain at least one pure virtual function.
Polymorphism enables calling different implementations via base class pointers.
vtable is used for dynamic dispatch of virtual functions.

## UML Diagram
(see diagram in Mermaid format)

## Project Structure
include/ – header files  
src/ – implementation files and main program  

## Key Code Fragments
- Employee: abstract base class with pure virtual methods
- Engineer: intermediate class
- SeniorEngineer: lower-level derived class

## Business Logic
- Engineer salary depends on number of projects
- SeniorEngineer adds bonus to salary
- Manager salary depends on team size

## Demo Program
Array `Employee* items[N]` stores different objects.
Same virtual method is called in loop → demonstrates polymorphism.

## Debugger Investigation
Using gdb:
- break main
- run
- print *items[0]
- info vtbl *items[0]

## REPORT.md Summary
Hierarchy implemented correctly, dynamic dispatch works.

## Conclusion
The hierarchy demonstrates correct use of inheritance,
abstract classes, and polymorphism.