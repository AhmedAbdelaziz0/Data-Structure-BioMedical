#include <iostream>

using namespace std;

int maxint(int *arr, int size) {
  int m = 0;

  for (int i  = 1; i < size; i++) {
    if (arr[i] > arr[m])
      m = i;
  }
  return m;
}

int main() {
  const int size = 6;
  int arr[size] = {1, 2, 3, 0, -1, 4};

  // int max_size;

  // cout << "Enter: ";
  // cin >> max_size;

  // int arr[100];

  // for (int i = 0; i < max_size; i++) {
  //   cin >> arr[i];
  // }
}

// size = 10
// arr
// *
// *
//
//
//
