#include <iostream>
#include <optional>

using std::cout;

template <typename T> class Stack {
private:
  T *arr;
  int top_index;
  int max_size;

public:
  Stack(int max_size) : top_index(-1), max_size(max_size) {
    arr = new T[max_size];
  }

  ~Stack() { delete[] arr; }

  bool isFull() { return top_index == max_size; }

  bool isEmpty() { return top_index == -1; }

  void push(int elem) {
    // top = -1
    if (isFull()) {
      cout << "Full Stack\n";
      return;
    }
    top_index++;
    arr[top_index] = elem;
  }

  void pop() {
    if (isEmpty()) {
      cout << "Empty Stack\n";
      return;
    }
    top_index --;
  }
  // int pop();

  int top() {
    if (!isEmpty()) {
      return arr[top_index];
    }
    cout << "Empty Stack\n";
    return -1;
  }
};
