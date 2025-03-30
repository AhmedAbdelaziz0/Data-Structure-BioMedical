#include <iostream>

using namespace std;

int main() {
  int a0[10], a1[10], a2[10], a3[10], a4[10];
  int a5[10], a6[10], a7[10], a8[10], a9[10];

  int *ap[10] = {a0, a1, a2, a3, a4, a5, a6, a7, a8, a9};

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      ap[i][j] = (j + 10 * i) * 10;
    }
  }

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      cout << ap[i][j] << ' ';
    }
    cout << '\n';
  }

  return 0;
}
