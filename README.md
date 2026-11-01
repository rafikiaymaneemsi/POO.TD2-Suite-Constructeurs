# TD2 - C++ Exercises

## Description

This repository contains two C++ exercises demonstrating object-oriented programming concepts:

### Exercise 1: Book pricing

Located in `exo1/`, this exercise defines a `Livre` class with:

- A unique code managed by a static counter
- A title and number of pages
- A copy price calculated according to the number of pages
- An `afficher()` method that displays the book information

Discount rules:

- 100 to 200 pages: 10% discount
- More than 200 pages: 25% discount
- Fewer than 100 pages: no discount

The base copy price is 0.50 MAD per page.

### Exercise 2: Point and segment geometry

Located in `exo2/`, this exercise defines:

- A `Point` class storing two coordinates
- A `Point::distance()` method using the Euclidean distance formula
- A `Segment` class containing an origin point and an endpoint
- A method to calculate the segment length

## Project structure

```text
TD2/
├── exo1/
│   ├── Livre.h
│   ├── Livre.cpp
│   ├── main.cpp
│   └── main.exe
├── exo2/
│   ├── Point.h
│   ├── Point.cpp
│   ├── Segment.h
│   ├── Segment.cpp
│   ├── main.cpp
│   └── main.exe
├── .gitignore
├── "TD2 - suite - constructeurs.pdf"
└── README.md
```

## Requirements

- A C++ compiler compatible with the C++11 standard or newer
- `g++` is recommended

## Build and run

### Exercise 1

Because `main.cpp` includes `Livre.cpp`, compile it directly:

```bash
cd exo1
g++ main.cpp -o main
./main
```

On Windows:

```powershell
cd exo1
g++ main.cpp -o main.exe
.\main.exe
```

### Exercise 2

Compile all implementation files with the main program:

```bash
cd exo2
g++ main.cpp Point.cpp Segment.cpp -o main
./main
```

On Windows:

```powershell
cd exo2
g++ main.cpp Point.cpp Segment.cpp -o main.exe
.\main.exe
```

## Concepts covered

- Classes and objects
- Constructors
- Static attributes
- Encapsulation
- Object composition
- Dynamic allocation and memory release
- Header and implementation files
- Euclidean distance calculation
