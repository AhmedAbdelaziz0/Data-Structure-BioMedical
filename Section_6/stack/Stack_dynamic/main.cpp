#include "Stack.h"
#include <iostream>

// need further testing
int main() {
  Stack st(100);

  std::cout << st.isEmpty() << std::endl;

  st.push(1);
  st.push(2);
  st.print();

  st.pop();
  std::cout << st.top() << std::endl;

  st.print();
  return 0;
}
