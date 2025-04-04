#pragma once
#include <iostream>

template <typename T> class Stack {
private:
  int top_index;
  T *arr;
  int size;

public:
  Stack(int size = 80) : top_index(0), size(size) {
    arr = new T[size];
  }

  bool isEmpty() const { return top_index == 0; }

  bool isFull() const { return top_index == size; }

  void push(T data) {
    if (!isFull()) {
      arr[top_index] = data;
      top_index++;
    }
  }

  void pop() {
    if (!isEmpty()) {
      top_index--;
    }
  }

  T top() const {
    if (!isEmpty()) {
      return arr[top_index - 1];
    }
    std::cerr << "mpty\n";
    return T();
  }

  void print() const {
    for (int i = 0; i < top_index; i++) {
      std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
  }

  ~Stack() { delete[] arr; }
};
