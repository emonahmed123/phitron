# Phitron — My CSE Fundamentals Journey

This repo is where I keep my practice code from the **[CSE Fundamentals with Phitron](https://phitron.io/)** course.

Phitron is an online program that covers the core of Computer Science and Engineering: programming, problem solving, data structures and algorithms. I started from zero with **C**, and I'm now moving on to **C++ for DSA**. I push every program I write here to track my progress.

## What's in this repo

### C programming

| Folder                   | Topic                                                      | Files                                                                                                                                                                         |
| ------------------------ | ---------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| [intro-p/](intro-p/)     | Getting started: my first C program                        | `test.c` (Hello World)                                                                                                                                                        |
| [module01/](module01/)   | Output, variables, data types and input                    | `first.c` (`int`, `float`, `char` with `printf`), `bool.c` (`stdbool.h`), `input.c` (`scanf`)                                                                                 |
| [module02/](module02/)   | Arithmetic, relational and logical operators, conditionals | `arithmetic.c`, `mod.c` (`%`), `relationalop.c`, `logical.c` (`&&`, `\|\|`), `condition.c` (`if`/`else`, else-if ladder, nested if)                                           |
| [module03/](module03/)   | Loops                                                      | `forloop.c`, `while.c`, `break.c`, `continune.c`, `sum.c`, `oddeven.c`                                                                                                        |
| [module05/](module05/)   | Characters and conditions practice                         | `char.c`, `CapitalorSmall.c`, `Firstdigit.c`, `maxmin.c`, `J-Multiples.c`, `welcome_with_conditions.c`                                                                        |
| [module06/](module06/)   | Loop problem solving                                       | `B_Even_Numbers.c`, `E_Max.c`, `F_Multiplication_table.c`, `G_Factorial.c`, `K_Divisors.c`, `Q_Digits.c`, `S_Sum_of_Consecutive_Odd_Numbers.c`, `prepostincrement.c` and more |
| [module-7/](module-7/)   | Arrays                                                     | `array.c`, `array_input_output.c`, `forprint.c`                                                                                                                               |
| [module09/](module09/)   | Array operations                                           | `inset.c` (insert), `delete.c`, `revers.c` (reverse), `swap.c`                                                                                                                |
| [module10/](module10/)   | Strings                                                    | `string_input.c`, `stringwithspace.c`, `lenght.c`, `B_Let_s_use_Getline.c`, `E_Count.c`, `F_Reversing.c`, `F_Way_Too_Long_Words.c`, `G_Palindrome_Array.c`                    |
| [module11/](module11/)   | String practice                                            | `frequency.c`, `string_compare.c`, `Count_Me_1.c`                                                                                                                             |
| [module-13/](module-13/) | Patterns and sorting                                       | `pyramid_pattren.c`, `start_pattren.c`, `selection_sort.c`, `sum_of_2_equal.c`, `more.c`                                                                                      |
| [module-14/](module-14/) | Functions and scope                                        | `return-parameter.c`, `scop.c`, `G_Max_and_MIN.c`, `H_Sorting.c`, `N_Shift_Zeros.c`, `P_Shape_1.c`, `T_Shape_2.c`                                                             |
| [module-15/](module-15/) | Pointers                                                   | `pointer.c`, `pointer_in_array.c`, `pass_value.c`, `paa_by_reference.c`, `scanf_fun.c`, `Is_Palindrome.c`, `T_Sort_Numbers.c` and more                                        |
| [module-17/](module-17/) | Recursion                                                  | `recursion.c`, `call_satck.c`, `print_one_to_n.c`                                                                                                                             |
| [moduel-18/](moduel-18/) | 2D arrays (matrices)                                       | `2darray.c`, `checking_primary_daigonal_matrix.c`, `checking_row_matrix.c`, `checking_zero_matrix.c`, `S_Search_In_Matrix.c`, `T_Matrix.c`, `W_Mirror_Array.c` and more       |
| [module-19/](module-19/) | Practice problems and contest                              | `Difference_Array.c`, `Find_the_Missing_Number.c`, `Jadu_Matrix.c`, `Magical_Tree.c`, `Matrix_Again.c`, `D_Print_Digits_using_Recursion.c`, `contest.c`                       |

### C++ for DSA

| Folder                                         | Topic                    | Files                                                                                                                                                                |
| ---------------------------------------------- | ------------------------ | -------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| [c++_for_dsa/module-1/](c++_for_dsa/module-1/) | C++ basics: input/output | `test.cpp` (Hello World), `print.cpp` (`cout`), `input.cpp` (`cin`), `EoF.cpp` (read until end of file), `setprecision.cpp` (`fixed`, `setprecision`), `if_else.cpp` |

I'll add more folders as the course goes on.

## Learning roadmap

- [x] Introduction to C and setting up the environment
- [x] Variables, data types and input/output
- [x] Arithmetic operators
- [x] Conditionals (`if`, `else`)
- [x] Loops (`for`, `while`, `do-while`)
- [x] Arrays and strings
- [x] Functions and recursion
- [x] Pointers
- [x] 2D arrays
- [x] Problem solving practice
- [ ] C++ for DSA (in progress)
- [ ] Data structures
- [ ] Algorithms
- [ ] Object-oriented programming
- [ ] Databases

## How to run

You need a C/C++ compiler such as GCC (on Windows, use MinGW).

```bash
# C
gcc module02/arithmetic.c -o arithmetic
./arithmetic

# C++
g++ c++_for_dsa/module-1/print.cpp -o print
./print
```

The `.gitignore` keeps compiled `.exe` files out of the repo.
