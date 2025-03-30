#include <iostream>


template<typename T>
void swap(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
}

unsigned int length(char *str, char stop='\0') {
  int i = 0;
  while (str[i] != '\0')
    i++;
  return i;
}

void reverseit(char *str) {
  int l = length(str);

  for (int i = 0; i < l / 2; i++) {
    swap<char>(str[i], str[l - i - 1]);
  }
}

void print(char *str) {
  int i = 0;
  while (str[i] != '\0')
    std::cout << str[i++] << ' ';
  std::cout << std::endl;
}

int main() {
  char str[7] = "012345";
  reverseit(str);
  print(str);

  return 0;
}
