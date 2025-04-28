#include <iostream>

using namespace std;

class SortedArray {
private:
  int *arr;
  int maxsize;
  int size;

  int get_index(int elem) {
    int index = 0;
    while (index < size && arr[index] < elem)
      index++;
    return index;
  }

  void insert_at(int index, int elem) {
    for (int i = size; i > index; i--) {
      arr[i] = arr[i - 1];
    }
    arr[index] = elem;
  }

  void remove_at(int index) {
    for (int i = size - 1; i > index; i--) {
      arr[i - 1] = arr[i];
    }
  }

public:
  SortedArray(int size) : arr(new int[size]), maxsize(size), size(0) {}

  void insert(int elem) {
    if (size == 0) {
      arr[0] = elem;
      size++;
    } else {
      // find suitable place
      int index = get_index(elem);
      insert_at(index, elem);
      size++;
    }
  }

  void remove(int elem) {
    // make sure it exists
    if (arr[0] <= elem && elem <= arr[size - 1]) {
      int index = get_index(elem);
      remove_at(index);
      size--;
    }
  }

  void print() {
    for (int i = 0; i < size; i++) {
      cout << arr[i] << ' ';
    }
    cout << '\n';
  }
};

int main() {
  SortedArray sarr(10);

  sarr.insert(10);
  sarr.insert(12);
  sarr.insert(0);

  // 0 10 12
  sarr.print();

  sarr.insert(1);
  // 0 1 10 12
  sarr.print();

  sarr.remove(10);
  sarr.print();

  return 0;
}
