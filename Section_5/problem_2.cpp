#include <iostream>

using namespace std;

// void addarrays(float *a, float *b, float *sum, int size);
void addarrays(const float *a, const float *b, float *sum, int size);


int main() {
  const int size = 5;
  float arr1[size] = {1, 2, 3, 4, 5};
  float arr2[size] = {6, 7, 8, 9, 10};
  float arr_result[size] = {0}; // what does this do?
  addarrays(arr1, arr2, arr_result, size);
  // print result

  for (float *i = arr_result; i < arr_result + size; i++) {
    cout << *i << ' ';
  }
  return 0;
}

void addarrays(const float *a, const float *b, float *sum, int size) {
  const float *end = a + size;

  while (a < end) {
    *sum = *a + *b;

    a++;
    b++;
    sum++;
  }
}
