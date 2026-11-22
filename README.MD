This is a repository for the students who are new to the C programming language. Here they can learn C programming from scratch along with tasks and practical exercises.

This is one of the best structured, hands-on repository for learning C programming from the ground up.

## Course Outline

1. [Setup & Hello World](docs/01-setup-and-hello.md)
2. [Variables, Data Types & Operators](docs/02-variables-types.md)
3. [Sequencials, Conditionals & Loops](docs/03-control-flow.md)
4. [Functions & Scope](docs/04-functions.md)
5. [Arrays & Strings](docs/05-arrays-strings.md)
6. [Pointers & Memory Management](docs/06-pointers-memory.md)
7. [Structs & File I/O](docs/07-structs-file-io.md)

Step-01
First for using C-programming in VScode you need to configure VScode for C and C++. 
YOu can watch this video if you are confused on how to do so: https://youtu.be/1PBD5qFWdq8 

Step-02 
You need some prior knowledge about some very important aspects of c programming. 

# 1. Basic Theory of C Programming & Hello World

## What is C?

C is a **general-purpose, procedural programming language** developed by **Dennis Ritchie** at Bell Laboratories in **1972**. It was originally created to build the UNIX operating system and has remained a foundational language in computer science ever since.

### Key Characteristics of C
* **Procedural Language:** Programs are structured as a sequence of step-by-step instructions grouped into reusable blocks called **functions**.
* **Middle-Level Language:** C combines the readability of high-level languages (such as `if` statements, loops, and functions) with low-level access to computer memory and hardware.
* **Fast and Efficient:** Because C compiles directly into native machine code without heavy runtime overhead, programs written in C run very fast and use minimal memory.
* **Portable:** Standard C code can be compiled and run on almost any operating system or hardware architecture with little or no modification.

### Where C is Used Today
* **Operating Systems:** Windows, Linux, and macOS kernels.
* **Embedded Systems:** Microcontrollers, automotive systems, medical devices, and IoT hardware.
* **Compilers & Interpreters:** The standard Python interpreter (CPython) and many compilers are written in C.
* **Databases & Game Engines:** Core components of PostgreSQL, SQLite, and high-performance engines.

---

## How a C Program Runs (Compilation Process)

Computers only understand binary machine instructions (`0`s and `1`s). Unlike interpreted languages (such as Python) that execute code line-by-line, **C is a compiled language**. A program called a **compiler** (such as `gcc` or `clang`) translates your entire source file into an executable program before you run it.

```text
  hello.c          Preprocessor         Compiler           Assembler           Linker          hello.exe / ./hello
(Source Code)  --->  (Expands #)   --->  (Assembly)   --->  (Object .o)  --->  (Adds libs)  --->    (Executable)
```

1. **Source Code (`.c`):** The human-readable C code you write in your editor.
2. **Preprocessor:** Processes lines starting with `#` (such as `#include`). It inserts header file contents and strips out comments before compilation.
3. **Compiler:** Checks your code for syntax errors and translates the preprocessed C code into assembly language.
4. **Assembler:** Converts the assembly instructions into binary machine code stored in an **object file** (`.o` or `.obj`).
5. **Linker:** Combines your object file with pre-compiled standard library code (such as the implementation of `printf`) to produce the final standalone executable file.

---

## Anatomy of a Basic C Program

Every runnable C program follows a standard structure. Below is a minimal C program:

```c
#include <stdio.h>

// Program execution begins inside the main function
int main(void) {
    printf("Hello, World!\n");
    return 0;
}
```

### Line-by-Line Breakdown

| Component | Purpose |
| --- | --- |
| `#include <stdio.h>` | **Preprocessor directive:** Includes the Standard Input/Output header (`stdio.h`), giving the program access to functions such as `printf()` and `scanf()`. |
| `int main(void)` | **Main function:** The entry point of every C program. `int` indicates an integer return value, and `void` means the function takes no parameters. |
| `{ ... }` | **Curly braces:** Enclose the block of code that defines the body of `main`. |
| `printf("Hello, World!\n");` | **Output function:** Prints text to the console. `\n` is an escape sequence that adds a newline. |
| `;` | **Statement terminator:** Ends an individual C statement. |
| `return 0;` | **Exit status:** Ends `main` and returns `0` to the operating system to indicate successful execution. |

---

## Building Blocks of C (Tokens)

The smallest individual units in a C program are called **tokens**. The compiler breaks your source code down into six categories of tokens:

### 1. Keywords
Reserved words that have a fixed meaning to the C compiler and cannot be used as variable or function names. All C keywords are strictly lowercase.
* Examples: `int`, `float`, `char`, `if`, `else`, `for`, `while`, `return`, `void`, `const`, `struct`

### 2. Identifiers
Names created by the programmer for variables, functions, arrays, and structures.
* **Rules for valid identifiers:**
  1. Can only contain letters (`A–Z`, `a–z`), digits (`0–9`), and underscores (`_`).
  2. Must begin with a letter or an underscore (cannot start with a digit).
  3. Cannot contain spaces or special symbols (`@`, `$`, `%`, `-`).
  4. Cannot be a reserved C keyword.
  5. **Case-sensitive:** `total`, `Total`, and `TOTAL` are three different identifiers.

### 3. Constants (Literals)
Fixed values written directly into the code that do not change during execution.
* **Integer constants:** `10`, `-42`, `0`
* **Floating-point constants:** `3.14`, `-0.005`
* **Character constants:** `'A'`, `'9'`, `'\n'` (enclosed in single quotes)
* **String literals:** `"Hello, World!"` (enclosed in double quotes)

### 4. Operators
Symbols that tell the compiler to perform specific mathematical, relational, or logical operations.
* **Arithmetic:** `+`, `-`, `*`, `/`, `%`
* **Assignment:** `=`, `+=`, `-=`
* **Comparison:** `==`, `!=`, `<`, `>`, `<=`, `>=`
* **Logical:** `&&` (AND), `||` (OR), `!` (NOT)

### 5. Punctuators (Separators)
Symbols used to structure and separate code elements: `;` (semicolon), `,` (comma), `{ }` (braces), `( )` (parentheses), `[ ]` (brackets).

---

## Comments and Whitespace

### Comments
Comments are notes written for human readers. The compiler completely ignores them.

```c
// This is a single-line comment

/*
   This is a multi-line comment.
   It can span across several lines.
*/
```

### Whitespace & Indentation
Spaces, tabs, and blank lines are ignored by the compiler (except inside string literals or when separating tokens). However, consistent indentation (typically 4 spaces per block) is essential for keeping code readable and easy to debug.

---

## How C Thinks About Memory

When you declare a variable in C, the program reserves a specific block of bytes in **RAM (Random Access Memory)**. Every variable has three fundamental attributes:

1. **Name:** The identifier used to access it in code (e.g., `score`).
2. **Value:** The actual data stored inside that memory block (e.g., `95`).
3. **Memory Address:** The unique numeric location in RAM where that block lives.

Understanding that every variable occupies a real location in memory is the foundation for mastering data types, arrays, and pointers later in the course.

---

## Compiling and Running in the Terminal

Save your code in a file named `hello.c`, open your terminal in that folder, and run:

```bash
gcc -Wall -Wextra -std=c17 hello.c -o hello
./hello
```

* `gcc` — Invokes the GNU C Compiler.
* `-Wall -Wextra` — Enables compiler warnings to help catch common beginner mistakes early.
* `-std=c17` — Tells the compiler to follow the modern C17 language standard.
* `-o hello` — Sets the output executable name to `hello` (or `hello.exe` on Windows).
* `./hello` — Executes the compiled program (`hello.exe` in Windows Command Prompt).