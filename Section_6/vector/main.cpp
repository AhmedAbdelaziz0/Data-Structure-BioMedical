#include <iostream>
#include "Vector.h"

using namespace std;

int main() {
  Vector v1;
  v1.append(1);
  v1.append(2);
  v1.append(3);

  for (int i = 0; i < 3; i++) {
    cout << v1[i] << endl;
  }

  v1.insert(1, 10);
  cout << v1[1] << endl;

  v1.remove(1);
  cout << v1[1] << endl;

  v1.append(9);

  for (int i = 0; i < v1.size(); i++) {
    cout << v1[i] << endl;
  }


  return 0;
}
