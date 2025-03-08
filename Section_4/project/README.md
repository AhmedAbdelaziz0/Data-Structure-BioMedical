# Multi-file project

This is for demonstration on how we deal with multiple files in a project.

You must know that IDEs handle's most of the things we will do.

---

1. You can design your program as you want (classes and functions)

2. Then create file for each part of the code (it can contain the class and functions)

3. The files should be spilt into header files and source files

Header files contain only the function's prototypes and class definitions, while source files contain the function's implementations and class definitions.

The reason we split it so we can use it in multiple files, and if we don't we
will get linking error.

4. You can use `#include` to include the header file in your source file. use
   `<>` for system headers and `""` for user headers.

5. You can use `#pragma once` to include the header file once in your project.

6. Now that you have headers and sources it is time for compilation, you can use
   compiler such as gcc or clang to compile your code.
    the compiler only compiles the source files, it doesn't compile the header,
    also it only cares about the file at hand (it will not make sure that the
    included libraries are compiled or even exists).

7. The output of the compiler is an object file, which is a binary file that
   contains the compiled code.

8. After we have compiled all the source files, we can link them together to
   create an executable file.
   a linker is a program that links object files together.
   it will search for your included libraries and link them together.

9. The output of the linker is an executable file, which is a binary file that
   can be executed.

10. We can do the previous steps if we have small project, for larger ones we
    use Makefile or CMake, it makes the building process more efficient and
    easier.
