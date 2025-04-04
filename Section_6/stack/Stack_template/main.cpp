#include "Stack.h"
#include <iostream>

// to test stack template
class Point2D {
private:
  float x;
  float y;

public:
  Point2D() : x(0), y(0) {
  }

  Point2D(float x, float y) : x(x), y(y) {
  }

  friend std::ostream& operator<<(std::ostream& os, const Point2D& p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
  }
};

// need further testing
int main() {
  Stack<Point2D> st;

  std::cout << st.isEmpty() << std::endl;

  st.push(Point2D());
  st.push({1,2});
  st.push(Point2D(12, 13.44));
  st.print();

  st.pop();
  std::cout << st.top() << std::endl;

  st.print();
  return 0;
}
