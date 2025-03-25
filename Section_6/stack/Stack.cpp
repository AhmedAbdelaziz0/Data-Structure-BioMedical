#include "Stack.h"
#include <iostream>

Stack::Stack() {

}

bool Stack::isEmpty() const {

}

bool Stack::isFull() const {

}

void Stack::push(int data) {

}

void Stack::pop() {

}

int Stack::top() const {

}

void Stack::print() const {
  for (int i = 0; i < top_index; i++) {
    std::cout << arr[i] << ' ';
  }
  std::cout << std::endl;
}
