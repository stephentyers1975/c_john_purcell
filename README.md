# C Language Learning Journey

This repository contains my course notes, exercises, and practice programs from my C programming learning journey. I am using the excellent Mastering C Programming course by John Purcell.

https://www.caveofprogramming.com/products/courses/c-for-programmers-in-other-languages

## What is in here?

The files are organized by topic as I progressed through different areas of C:

- 2_vars_basictypes - variables, basic types, constants, and user input
- 3_control_flow - conditionals, loops, switch statements, and ternaries
- 4_compound_data - arrays, structs, enums, and unions
- 5_functions - function definitions, prototypes, headers, and modular code
- 6_pointers - pointers, pointer arithmetic, dynamic memory, and structs on the heap
- 7_strings - string handling, command-line arguments, and string functions
- 8_standardfunc - examples using the C standard library
- 9_filehandling - reading and writing files, including binary file examples
- 10_bitwise_ops - bitwise operators and bit shifting exercises
- 11_preprocessor - preprocessor directives, macros, and conditional compilation examples
- 12_error_handling - error handling examples using `assert` and `perror`
- 13_particle_fire - SDL-based particle/fire demo and refactor examples

## Purpose

These files serve as a personal record of my learning process. They include small programs, examples, and experiments that helped me understand core C concepts.

## How to run the examples

Each lesson folder contains small standalone C programs. A typical build command looks like this:

```bash
gcc -Wall -std=c23 -o program_name program_name.c
./program_name
```

For example:

```bash
cd 9_filehandling
gcc -Wall -std=c23 -o file_ex file_ex.c
./file_ex

Particle fire (SDL3 example):

```bash
cd 13_particle_fire/refactor/johns_solution
gcc -Wall -std=c23 -Iinclude -o main main.c graphics.c -lSDL3
./main
```

Notes:
- The particle demo uses SDL3. Install the SDL3 development libraries (for example `libSDL3-dev` on Debian/Ubuntu) before building.
- The `include/` path is used for local headers in the example build command above.
```

## Notes

- This repository is meant for learning and practice.
- Many files are simple example programs from course exercises.
- I may update or refine these as I continue learning.
