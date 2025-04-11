#include <iostream>

using namespace std;

class SortedArray {
private:
  int *arr;
  int size;

public:
  SortedArray(int size) {}

  void insert(int elem) {}

  void remove(int elem) {}

  void print() {}
};

int main() {
  SortedArray sarr(10);

  sarr.insert(10);
  sarr.insert(12);
  sarr.insert(0);
  sarr.print();

  sarr.insert(12);
  sarr.print();

  sarr.remove(10);
  sarr.print();

  return 0;
}
