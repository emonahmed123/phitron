# Phitron — My CSE Fundamentals Journey

This repo is where I keep my practice code from the **[CSE Fundamentals with Phitron](https://phitron.io/)** course.

Phitron is an online program that covers the core of Computer Science and Engineering: programming, problem solving, data structures and algorithms. I'm starting from zero with **C**, and I push every program I write here to track my progress.

## What's in this repo

| Folder                 | Topic                                   | Files                                                                                         |
| ---------------------- | --------------------------------------- | --------------------------------------------------------------------------------------------- |
| [intro-p/](intro-p/)   | Getting started: my first C program     | `test.c` (Hello World)                                                                        |
| [module01/](module01/) | Output, variables, data types and input | `first.c` (`int`, `float`, `char` with `printf`), `bool.c` (`stdbool.h`), `input.c` (`scanf`) |
| [module02/](module02/) | Arithmetic operators                    | `arithmetic.c` (`+ - * /`), `mod.c` (`%` remainder)                                           |

I'll add more folders as the course goes on.

## Learning roadmap

- [x] Introduction to C and setting up the environment
- [x] Variables, data types and input/output
- [x] Arithmetic operators
- [ ] Conditionals (`if`, `else`, `switch`)
- [ ] Loops (`for`, `while`, `do-while`)
- [ ] Arrays and strings
- [ ] Functions and recursion
- [ ] Pointers
- [ ] Problem solving practice
- [ ] Data structures
- [ ] Algorithms
- [ ] Object-oriented programming
- [ ] Databases

## How to run

You need a C compiler such as GCC (on Windows, use MinGW).

```bash
gcc module02/arithmetic.c -o arithmetic
./arithmetic
```

The `.gitignore` keeps compiled `.exe` files out of the repo.
