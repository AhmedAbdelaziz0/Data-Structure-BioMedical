#include <iostream>

class safearray {
private:
  int LIMIT;
  int *arr;

public:
  safearray() { arr = new int[LIMIT]; }

  ~safearray() { delete[] arr; }

  void putel(int value, int index) {
    if (index >= LIMIT || index < 0) {
      std::cout << "out of index\n";
      return;
    }
    arr[index] = value;
  }

  int getel(int index) {
    if (index >= LIMIT || index < 0) {
      std::cout << "out of range";
      exit(1);
      return -1;
    }
    return arr[index];
  }
};
