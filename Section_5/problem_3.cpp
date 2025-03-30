#include <iostream>

using namespace std;

int Strcmp(const char *s1, const char *s2) {
  while (*s1 && (*s1 == *s2)) {
    s1++;
    s2++;
  }

  // bad line but works!
  // return (*s1 - *s2) == 0 ? 0 : (*s1 - *s2) > 0 ? 1 : -1;

  if (*s1 == *s2) {
    return 0;
  } else if (*s1 > *s2) {
    return 1;
  } else {
    return -1;
  }
}

int main() {
  cout << Strcmp("ahmed", "ahmed") << endl;
  cout << Strcmp("ahae", "abcz") << endl;
  cout << Strcmp("ahme", "ahmed") << endl;

  return 0;
}
