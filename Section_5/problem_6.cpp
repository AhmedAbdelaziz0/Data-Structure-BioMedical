#include <iostream>

using namespace std;

int main() {
  // init
  int **ap = new int *[10];

  for (int i = 0; i < 10; i++) {
    ap[i] = new int[10];
  }

  // setting value
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      ap[i][j] = (j + 10 * i) * 10;
    }
  }

  // print
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      cout << ap[i][j] << ' ';
    }
    cout << '\n';
  }

  // clear memory
  for (int i = 0; i < 10; i++) {
    delete[] ap[i];
  }

  delete[] ap;

  return 0;
}
