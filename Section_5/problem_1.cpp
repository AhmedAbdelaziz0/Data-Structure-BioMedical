#include <iostream>

using namespace std;

int main() {
  int num = 0;
  cout << "Enter the number of values: ";
  cin >> num;
  if (num <= 0) {
    return 0;
  }

  float *list = new float[num];
  for (float *ptr = list; ptr < list + num; ptr++) {
    cout << "Enter a value: ";
    cin >> *ptr;
  }

  float sum = 0;
  for (float *ptr = list; ptr < list + num; ptr++) {
      sum += *ptr;
  }

  cout << "Average: " << sum / num << endl;


  return 0;
}
