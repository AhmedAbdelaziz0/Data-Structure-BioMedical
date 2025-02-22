# C++ Review

1. A point on the two-dimensional plane can be represented by two numbers: an `x` coordinate and a `y` coordinate. For example, `(4,5)` represents a point `4` units to the right of the vertical axis, and `5` units up from the horizontal axis. The sum of two points can be defined as a new point whose `x` coordinate is the sum of the `x` coordinates of the two points, and whose `y` coordinate is the sum of the `y` coordinates.

Write a program that uses a structure called point to model a point. Define three points, and have the user input values to two of them. Then set the third point equal to the sum of the other two, and display the value of the new point. Interaction with the program might look like this:

```
Enter coordinates for p1: 3 4
Enter coordinates for p2: 5 7
Coordinates of p1+p2 are: 8, 11
```

2. Raising a number `n` to a power `p` is the same as multiplying `n` by itself `p` times. Write a function called `power()` that takes a double value for `n` and an int value for `p`, and returns the result as a double value. Use a default argument of `2` for `p`, so that if this argument is omitted, the number `n` will be squared. Write a `main()` function that gets values from the user to test this function.

3. Write a function called `zeroSmaller()` that is passed two int arguments by reference and then sets the smaller of the two numbers to `0`. Write a `main()` program to exercise this function.

4. Start with the `power()` function of `Exercise 2`, which works only with type `double`. Create a series of overloaded functions with the same name that, in addition to `double`, also work with types `char`, `int`, `long`, and `float`. Write a `main()` program that exercises these overloaded functions with all argument types.

5. Write a function called `swap()` that interchanges two `int` values passed to it by the calling program. (Note that this function swaps the values of the variables in the calling program, not those in the function.) You’ll need to decide how to pass the arguments. Create a `main()` program to exercise the function.

6. Revise the four-function fraction calculator from `Exercise 12`, `Chapter 4`, so that it uses functions for each of the four arithmetic operations. They can be called `fadd()`, `fsub()`, `fmul()`, and `fdiv()`. Each of these functions should take two arguments of type `struct fraction`, and return an argument of the same type.

<details>
<summary> Hint </summary>

```cpp
#include <iostream>

using namespace std;

struct Fraction {
  int num;
  int den;
};

void print(const Fraction &frac) { cout << frac.num << '/' << frac.den; }

Fraction fadd(const Fraction &f1, const Fraction &f2) {
  int num = f1.num * f2.den + f1.den * f2.num;
  int den = f1.den * f2.den;
  return {num, den};
}

int main() {
  Fraction x = {1, 2}, y = {1, 2};
  // x + y

  // x - y

  // x * y

  // x / y

  return 0;
}
```

</details>
