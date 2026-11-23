This is a repository for the students who are new to the C programming language. Here they can learn C programming from scratch along with tasks and practical exercises.

This is one of the best structured, repository for learning C programming from the ground up.

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
You need to learn about the basic things of C-Programming 

# 1. Basic Theory of C Programming & Hello World

## What is C?

C is a **general-purpose, procedural programming language** developed by **Dennis Ritchie** at Bell Laboratories in **1972**. It was originally created to build the UNIX operating system and has remained a foundational language in computer science ever since he developed this program.

### Key Characteristics of C
* **Procedural Language:**The programs are organized in the form of a series of step-wise instructions that are put together as **functions**.
* **Middle-Level Language:** C is a language that provides features of high-level languages (like `if` constructs, loops, and functions) along with low-level capabilities related to computer hardware.
* **Fast and Efficient:**  C programs are efficient as they execute very quickly due to compilation of source code into native machine code.
* **Portable:** We can compile and run the code file of C in any computer or share the file via any medium.

### Where C is Used Today
* **Operating Systems:** Windows, Linux, and macOS kernels.
* **Embedded Systems:** Microcontrollers, automotive systems, medical devices, and IoT hardware.
* **Compilers & Interpreters:** The standard Python interpreter (CPython) and many compilers are written in C.
* **Databases & Game Engines:** Core components of PostgreSQL, SQLite, and high-performance engines.

---

## How a C Program Runs (Compilation Process)

Computers only understand binary machine instructions (`0`s and `1`s). Unlike  languages like Python that execute code line-by-line, **C is a compiled language**.In it there is a program called a **compiler** (such as `gcc` or `clang`) that translates our entire source file into an executable program before running it.

```text
  hello.c          Preprocessor         Compiler           Assembler           Linker          hello.exe / ./hello
(Source Code)  --->  (Expands #)   --->  (Assembly)   --->  (Object .o)  --->  (Adds libs)  --->    (Executable)
```

1. **Source Code (`.c`):**  The human readable C source code that you have written in the editor.
2. **Preprocessor:**  The lines that start with # (such as `#include`) are preprocessed. Preprocessor expands the header files and removes comments from the source code before compilation.
3. **Compiler:**  It checks your code for any syntax error and then translates the preprocessed C source code into assembly language.
4. **Assembler:**It also Converts the assembly instructions into binary machine code that is stored in an **object file** (`.o` or `.obj`).
5. **Linker:** It combines your object file with the pre-compiled standard library functions (like `printf()`) to create a stand-alone executable file.

---

## Anatomy of a Basic C Program

Every runnable/executable C program follows a standard structure. Here is an example:

```c
#include <stdio.h>

// Program execution begins inside the main function int main()
int main(void) {
    printf("Hello, World!\n");
    return 0;
}
```

### Line-by-Line Breakdown

| Component | Purpose |
| :--- | :--- |
| `#include <stdio.h>` | **Preprocessor Directive** to include the standard Input and Output header file (`stdio.h`) and use functions such as `printf()` and `scanf()`. |
| `int main(void)` | **Main Function**: Entry point for every C program. `int` denotes that it will return integer status and `void` means no parameters will be taken. |
| `{ ... }` | **Curly Braces** are used to indicate the starting and ending of a block of code like `main`. |
| `printf("Hello, World!\n");` | This is the standard library function which prints the string on the screen. `\n` is called **Escape Sequence**. It is used to specify the line separator (New Line). |
| `;` | **Semicolon** is used at the end of the command or statement. All statements in C should be ended by `;`. |
| `return 0;` | Exit from the `main` function and provide the status `0` to the Operating System. |


---

## Building Blocks of C (Tokens)

The smallest individual units in a C program are called **tokens**. The compiler breaks the source code into six categories of tokens. They are:

### 1. Keywords
Keywords that have a definite meaning to the C compiler and cannot be used as names for variables or functions. All C keywords are in lowercase only.
* Examples: `int`, `float`, `char`, `if`, `else`, `for`, `while`, `return`, `void`, `const`, `struct`

### 2. Identifiers
Identifiers are the names created by the programmer for variables, functions, arrays, and structures.
* **Rules for valid identifiers:**
  1. They Can only contain letters (`A–Z`, `a–z`), digits (`0–9`), and underscores (`_`) and no other objects.
  2. They must begin with a letter or an underscore and cannot start with a digit.
  3. They cannot contain spaces or special symbols as given (`@`, `$`, `%`, `-`).
  4. They cannot be a reserved C keyword.
  5. Identifiers are **Case-sensitive:** that means `total`, `Total`, and `TOTAL` are three different identifiers.

### 3. Constants (Literals)
They are the fixed values written directly into the code which do not change during the execution of program file.
* **Integer constants:** `10`, `-42`, `0`
* **Floating-point constants:** `3.14`, `-0.005`
* **Character constants:** `'A'`, `'9'`, `'\n'` (enclosed in single quotes)
* **String literals:** `"Hello, World!"` (enclosed in double quotes)

### 4. Operators
Operators are the ymbols that tell the compiler to perform specific mathematical, relational, or logical operations.
* **Arithmetic:** `+`, `-`, `*`, `/`, `%`
* **Assignment:** `=`, `+=`, `-=`
* **Comparison:** `==`, `!=`, `<`, `>`, `<=`, `>=`
* **Logical:** `&&` (AND), `||` (OR), `!` (NOT)

### 5. Punctuators (Separators)
Punctuators are the symbols that are used to structure and separate the code elements as given: `;` (semicolon), `,` (comma), `{ }` (braces), `( )` (parentheses), `[ ]` (brackets).

---

## Comments and Whitespace

### Comments
Comments are the notes written for human readers to understand what is happening in the program. A compiler completely ignores the comments.

```c
// This is a single-line comment

/*
   This is a multi-line comment.
   It can span across several lines.
*/
```

### Whitespace & Indentation
The compiler does not take into account spaces, tabs, or blank lines except within string literals or as token separators. Nevertheless, indentation, normally consisting of four spaces per block, is required for readability purposes.

---

## How C Thinks About Memory

A variable declaration in C programming allocates a definite number of bytes in the **RAM** (Random Access Memory). There are three basic characteristics of every variable declared:

1. **Name:** It is the identifier which is used to access it in code (e.g., `score`).
2. **Value:** It is the actual data stored inside that memory block (e.g., `95`).
3. **Memory Address:** It is the unique numeric location in the RAM where that block is stored.

Knowing that each variable resides at a particular place in memory is key to comprehending data types, arrays, and pointers in future classes.

---

## Compiling and Running in the Terminal

Save your code in a file named `hello.c`, open your terminal in that folder, and run the following code:

```bash
gcc -Wall -Wextra -std=c17 hello.c -o hello
./hello
```

* `gcc` — Invokes the GNU C Compiler.
* `-Wall -Wextra` — Enables compiler warnings in helping to catch common beginner mistakes early.
* `-std=c17` — Tells the compiler to follow the modern C17 language standard.
* `-o hello` — It Sets the output executable name to `hello` (or `hello.exe` on Windows).
* `./hello` — Executes the compiled program (`hello.exe` in the Command Prompt).

Use this guide to learn C as a beginner. This contains almost everything you need to learn to start your journey in C programming. 
