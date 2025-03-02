# Sheet 3

## Mini Project:

Our Final Code should look like this.

```cpp
int main() {
  Fraction f1, f2, res;
  char op;

  cout << "a op b: \n";
  cin >> f1 >> op >> f2;


  switch (op) {
  case '+':
    res = f1 + f2;
    break;
  case '-':
    res = f1 - f2;
    break;
  case '/':
    res = f1 / f2;
    break;
  case '*':
    res = f1 * f2;
    break;
  default:
    cout << "Invalid Operation";
  }
  res.simplify();
  cout << res;
}
}
```


1. We can start by defining our Fraction class.

2. Give it a constructor that takes two integers as parameters and sets the
   numerator and denominator accordingly.

3. Give it a default constructor that sets the `numerator` to `0` and `denominator` to `1`.

4. Write method `print` that uses `cout` to print the content of the class `<num> / <denom>`.

5. Write method `get` that uses `cin` to get the fraction `<num> / <denom>`.

6. Write method `add`, `sub`, `mul` and `div`.
```
add: num1 * denom2 + num2 * denom1, denom1 * denom2
sub: num1 * denom2 - num2 * denom1, denom1 * denom2
mul: num1 * num2, denom1 * denom2
div: num1 * denom2, denom1 * num2
```

**Note:** it is advisable to use const reference for `f1` and `f2`.
Example:
```cpp
Fraction add(const Fraction& f1) {
 // add myself to f1 and return the result
}
```

7. Write method `simplify` that simplifies the fraction.
we can simplify the fraction by dividing the numerator and denominator by their greatest common divisor.

```
gcd(48, 18) -> gcd(18, 48 mod 18) = gcd(18,12)
            -> gcd(12, 18 mod 12) = gcd(12,6)
            -> gcd(6, 12 mod 6) = gcd(6,0)
```
then the result is `6`.

use recursion for calculating the GCD.

8. Instead of using `add`, `sub`, `mul` and `div`, we can overload the `+`, `-`, `*` and `/` operators.
```cpp
Fraction operator+(const Fraction& f1);
```

9. Instead of using `print` and `get` we can use `<<` and `>>` operators.
```
friend ostream& operator<<(ostream& os, const Fraction& f) {
  return os << f.numerator << " / " << f.denominator;
}
```
