#include "Stack.h"
#include <iostream>

Stack::Stack(int size) : top_index(0) {
  if (size < 0) {
    std::cerr << "Size is smaller than 0\n, using default size (80)\n";
    size = 80;
  }
  this->arr = new int[size];
  this->size = size;
}

bool Stack::isEmpty() const { return top_index == 0; }

bool Stack::isFull() const { return top_index == size; }

void Stack::push(int data) {
  if (!isFull()) {
    arr[top_index] = data;
    top_index++;
  }
}

void Stack::pop() {
  if (!isEmpty()) {
    top_index--;
  }
}

int Stack::top() const {
  if (!isEmpty()) {
    return arr[top_index - 1];
  }
  std::cerr << "Stack is empty\n";
  return -1;
}

void Stack::print() const {
  for (int i = 0; i < top_index; i++) {
    std::cout << arr[i] << ' ';
  }
  std::cout << std::endl;
}

Stack::~Stack() { delete[] arr; }
