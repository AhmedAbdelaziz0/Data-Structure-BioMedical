# C++ Review Questions

## 1. Volume Conversion

Assuming there are 7.481 gallons in a cubic foot, write a program that asks the user to enter a number of gallons, and then displays the equivalent in cubic feet.

<details>
<summary>Answer:</summary>

```cpp
#include <iostream>

using namespace std;

int main() {
    double gallons;

    cout << "Enter the number of gallons: ";
    cin >> gallons;

    cout << "Equivalent in cubic feet: " << gallons * 7.481 << endl;

    return 0;
}
```

</details>

## 2. Temperature Conversion

You can convert temperature from degrees Celsius to degrees Fahrenheit by multiplying by `9/5` and adding 32. Write a program that allows the user to enter a floating-point number representing degrees Celsius, and then displays the corresponding degrees Fahrenheit.
<details>
<summary>Answer:</summary>

```cpp
#include <iostream>

using namespace std;

int main() {
    double celsius;

    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;

    double fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Equivalent in Fahrenheit: " << fahrenheit << endl;
    return 0;
}
```

</details>

## 3. Fraction Addition

If you have two fractions, `a/b` and `c/d`, their sum can be obtained from the formula:

```
    a/b + c/d = (a * d + b * c) / (b * d)
```

For example:

```
    1/4 + 2/3 = (1 * 3 + 4 * 2) / (4 * 3) = (3 + 8) / 12 = 11/12
```

Write a program that encourages the user to enter two fractions, and then displays their sum in fractional form. (You don’t need to reduce it to lowest terms.)

**Example interaction:**

```
Enter first fraction: 1/2
Enter second fraction: 2/5
Sum = 9/10
```

<details>

<summary>Answer:</summary>

```cpp
#include <iostream>

using namespace std;

int main() {
    double a, b, c, d;
    char dummy;

    cout << "Enter first fraction: ";
    cin >> a >> dummy >> b;

    cout << "Enter second fraction: ";
    cin >> c >> dummy >> d;

    double sum = (a * d + b * c) / (b * d);

    cout << "Sum = " << sum << endl;
}
```

</details>

## 4. Multiplication Table

Assume that you want to generate a table of multiples of any given number. Write a program that allows the user to enter the number and then generates the table, formatting it into 10 columns and 20 lines.

**Example interaction:**

```
Enter a number: 7
7 14 21 28 35 42 49 56 63 70
77 84 91 98 105 112 119 126 133 140
147 154 161 168 175 182 189 196 203 210
```

<details>
<summary>Answer:</summary>

```cpp
#include <iostream>

using namespace std;

int main () {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    for (int row = 0; row < 20; row ++) {
        for (int col = 0; col < 10; col ++) {
            int idx = row * 10 + col + 1;

            cout << idx * number << " ";
        }
    }
    return 0;
}
```

</details>

## 5. Bi-directional Temperature Conversion

Write a temperature-conversion program that gives the user the option of converting Fahrenheit to Celsius or Celsius to Fahrenheit.

**Example interaction:**

```
Type 1 to convert Fahrenheit to Celsius, 2 to convert Celsius to Fahrenheit: 1
Enter temperature in Fahrenheit: 70
In Celsius that’s 21.111111
```

<details>
<summary>Answer:</summary>

```cpp

```

</details>

## 6. Pyramid of Xs

Use `for` loops to construct a program that displays a pyramid of Xs on the screen. The pyramid should be 20 lines high, similar to the following example (5 lines shown):

```
    x
   xxx
  xxxxx
 xxxxxxx
xxxxxxxxx
```

<details>
<summary>Answer:</summary>

```cpp

```

</details>

## 7. Factorial Calculation

Write code to calculate the factorial of a number. The number should be entered by the user.

<details>
<summary>Answer:</summary>

```cpp

```

</details>

## 8. Fraction Calculator

Create a four-function calculator for fractions. The user should type the first fraction, an operator, and a second fraction. The program should then display the result and ask whether the user wants to continue.

The arithmetic operations on fractions are:

- **Addition:** `(a/b) + (c/d) = (a * d + b * c) / (b * d)`
- **Subtraction:** `(a/b) - (c/d) = (a * d - b * c) / (b * d)`
- **Multiplication:** `(a/b) * (c/d) = (a * c) / (b * d)`
- **Division:** `(a/b) / (c/d) = (a * d) / (b * c)`

<details>
<summary>Answer:</summary>

```cpp

```

</details>
