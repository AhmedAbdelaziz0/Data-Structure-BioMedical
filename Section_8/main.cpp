#include <iostream>

using namespace std;

void print(int *arr, int size);
void Swap(int &a, int &b);

void bubbleSort(int *arr, int size);
void insertionSort(int *arr, int size);
void selectionSort(int *arr, int size);
int binarySearch(int *arr, int size, int elem);
int linearSearch(int *arr, int size, int elem);

int main() {
  const int size = 6;
  int arr[size] = {1, 9, 2, 3, 5, 8};
  cout << "Array: ";
  print(arr, size);

  insertionSort(arr, size);
  print(arr, size);

  cout << binarySearch(arr, size, 1) << '\n';
  cout << binarySearch(arr, size, 2) << '\n';
  cout << binarySearch(arr, size, 3) << '\n';
  cout << binarySearch(arr, size, 5) << '\n';
  cout << binarySearch(arr, size, 8) << '\n';
  cout << binarySearch(arr, size, 9) << '\n';
  cout << binarySearch(arr, size, 10) << '\n';
  cout << binarySearch(arr, size, 0) << '\n';
  cout << binarySearch(arr, size, 4) << '\n';
}

void print(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << ' ';
  }

  cout << '\n';
}

void Swap(int &a, int &b) {
  int t = a;
  a = b;
  b = t;
}

void bubbleSort(int *arr, int size) {
  for (int i = size - 1; i >= 0; i--) {
    for (int j = 0; j < i; j++) {
      if (arr[j] > arr[j + 1]) {
        Swap(arr[j], arr[j + 1]);
      }
    }
  }
}

void insertionSort(int *arr, int size) {
  for (int i = 1; i < size; i++) {
    int cur = arr[i]; // copy value
    int j = i - 1;
    while ((j >= 0) && (arr[j] > cur)) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = cur;
  }
}

void selectionSort(int *arr, int size) {
  for (int i = 0; i < size - 1; i++) {
    int min_idx = i;
    for (int j = i + 1; j < size; j++) {
      if (arr[min_idx] > arr[j])
        min_idx = j;
    }
    Swap(arr[min_idx], arr[i]);
  }
}

int linearSearch(int *arr, int size, int elem) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == elem) {
      return i;
    }
  }
  return -1;
}

int binarySearch(int *arr, int size, int elem) {
  if (size == 0)
    return -1;

  int left = 0, right = size - 1;
  int mid;

  while (left <= right) {
    mid = (left + right) / 2;

    if (arr[mid] == elem)
      return mid;
    else if (arr[mid] < elem)
      left = mid + 1;
    else
      right = mid - 1;
  }
  return -1;
}
