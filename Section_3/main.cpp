#include <iostream>

using namespace std;

class Fraction {
private:
  int num;
  int den;

  int gcd(int a, int b) {
    if (b == 0)
      return a;
    return gcd(b, a % b);
  }

public:
  Fraction() {}
  ~Fraction() {}
  Fraction(int n, int d) : num(n), den(d) {}

  Fraction operator+(const Fraction &f) {
    Fraction temp;
    temp.num = num * f.den + den * f.num;
    temp.den = den * f.den;
    return temp;
  }

  Fraction operator-(const Fraction &f) {
    Fraction temp;
    temp.num = num * f.den - den * f.num;
    temp.den = den * f.den;
    return temp;
  }

  Fraction operator*(const Fraction &f) {
    Fraction temp;
    temp.num = num * f.num;
    temp.den = den * f.den;
    return temp;
  }

  Fraction operator/(const Fraction &f) {
    Fraction temp;
    temp.num = num * f.den;
    temp.den = den * f.num;
    return temp;
  }

  friend istream &operator>>(istream &in, Fraction &f) {
    char dummy;
    in >> f.num >> dummy >> f.den;
    return in;
  }

  friend ostream &operator<<(ostream &out, const Fraction &f) {
    out << f.num << "/" << f.den;
    return out;
  }

  void simplify() {
    // gcd impl
    int g = gcd(num, den);
    num /= g;
    den /= g;
  }
};

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
