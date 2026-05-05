# Lab 09 – Multiple Inheritance

## Objective
To study multiple inheritance, diamond problem and virtual inheritance in C++.

## Theory
Multiple inheritance allows a class to inherit from multiple base classes.  
This may cause ambiguity when base classes share a common ancestor.  
This is known as the diamond problem.

Virtual inheritance is used to ensure only one instance of the base class exists.

## Variant
File → TextFile, Compressible, Encryptable → SecureCompressedFile

## Implementation
- File is abstract base class
- Intermediate classes use virtual inheritance
- SecureCompressedFile combines all features
## Structure
Each class is placed in separate .h/.cpp files.

## Conclusion
The use of virtual inheritance eliminates duplication of the base class.
Polymorphism allows unified processing via base pointers.