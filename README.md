# C Language Learning Journey

This repository is a collection of exercises, experiments, and small projects from my C learning journey using the Mastering C Programming course by John Purcell.

Course link: https://www.caveofprogramming.com/products/courses/c-for-programmers-in-other-languages

## Repository structure

The repo is organized by topic and progress stage:

- 2_vars_basictypes - variables, constants, arithmetic, casting, user input
- 3_control_flow - conditionals, loops, switch, goto, ternary operators
- 4_compound_data - arrays, structs, enums, unions, nested data
- 5_functions - modular functions, headers, includes, and code organization
- 6_pointers - pointer arithmetic, heap memory, addresses, structs on the heap
- 7_strings - string handling and C string library usage
- 8_standardfunc - examples using common standard library functions
- 9_filehandling - file I/O and binary file work
- 10_bitwise_ops - bit masks, bit shifting, XOR, and bitwise patterns
- 11_preprocessor - macros, conditional compilation, token pasting, stringizing
- 12_error_handling - assert, perror, and error reporting patterns
- 13_particle_fire - SDL-based particle fire and motion experiments

## 13_particle_fire project

This section contains a series of related SDL experiments and refinements:

- basic - foundational particle system and rendering experiments
- main_code - the main particle fire implementation
- refactor - cleaner/structured version of the fire simulation
- animation_ex - animation-focused examples
- blur_ex - the blur test and post-processing pass added to the particle fire demo

The most recent work under [13_particle_fire/blur_ex](13_particle_fire/blur_ex) includes:

- SDL3 window setup and texture rendering
- particle swarm generation and rendering
- a blur pass using horizontal and vertical convolution-style updates
- a `graphics_test_blur()` validation function for the blur math
- buffer management with a separate back buffer for blur processing

## Current build command for the blur example

From the current folder [13_particle_fire/blur_ex](13_particle_fire/blur_ex), this command builds the project successfully:

```bash
gcc -std=c11 -Wall -I. main.c graphics.c particle.c swarm.c hslrgb.c -lSDL3 -lm -o main
```

Run it with:

```bash
./main
```

## Notes on SDL build requirements

- This project uses SDL3, so the SDL3 development libraries must be installed.
- On Debian/Ubuntu-based systems, the package is typically `libsdl3-dev`.
- The source code includes local headers via `include/`, so the build uses `-I.` for the project root.

## Learning purpose

This repository is primarily a learning log and practice workspace. It captures:

- small step-by-step C exercises from the course
- experiments with problem solving and debugging
- growing familiarity with memory, data structures, and graphics programming
- practical examples that combine C with SDL for visual output

## Typical example command

For simple non-SDL C programs in the repo, a basic build pattern is:

```bash
gcc -Wall -std=c23 -o program_name program_name.c
./program_name
```

## Summary

The repo has moved beyond simple textbook exercises into more applied C work, especially around graphics programming and particle systems. The blur example is a good example of how a basic C program can evolve from core learning into a small interactive rendering project.
