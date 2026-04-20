# Lab 06 — Book Printing

## Task
Implement an object-oriented model of a book using composition.

Required classes:
- Book
- Chapter
- Page
- Cover
- Index

---

## Description

In this work, a simple model of a book was implemented.

The main class is **Book**, which represents a complete publication.  
A book consists of chapters, pages, a cover, and an index.

The main focus is on **composition**, meaning that all parts belong to the book and do not exist independently.

---

## Structure

- **Book**
  - contains an array of Chapter
  - contains Cover
  - contains Index

- **Chapter**
  - contains an array of Page

- **Page**
  - represents a single page

- **Cover**
  - represents the book cover

- **Index**
  - stores entries for navigation

---

## Relationships

Composition is used in the following relationships:

- Book → Chapter  
- Chapter → Page  
- Book → Cover  
- Book → Index  

All parts are created and destroyed together with the Book.

---

## Implementation
 
- Dynamic arrays were implemented manually using `new` and `delete`
- Each class includes:
  - constructors
  - basic methods
  - destructors (for memory management)

Project structure:
- `public/` — header files  
- `private/` — implementation files  
- `tests/` — unit tests  

---

## Demo

The `main.cpp` demonstrates:
- creating a Book object
- adding chapters
- adding pages
- printing basic information

---

## Testing

Basic unit tests were created using Google Test:
- checking chapter creation
- checking adding pages

---

## Project Structure

```
lab06/
├── CMakeLists.txt
├── main.cpp
├── public/
├── private/
└── tests/
```

---

## Conclusion

The program demonstrates:
- object-oriented design
- composition relationships
- manual memory management
- modular project organization