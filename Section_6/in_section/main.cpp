#include <iostream>

using namespace std;

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

  bool isFull() const { return top_index == max_size; }

  bool isEmpty() const { return top_index == -1; }

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
    top_index--;
  }
  // int pop();

  int top() const {
    if (!isEmpty()) {
      return arr[top_index];
    }
    cout << "Empty Stack\n";
    return -1;
  }

  friend ostream& operator<<(ostream& out, Stack& st) {
    for (int i = 0; i <= st.top_index; i++) {
      out << st.arr[i] << ' ';
    }
    out << endl;
    return out;
  }

  friend istream& operator>>(istream& in, Stack& st) {
    if (!st.isFull())
      in >> st.arr[++st.top_index];
    return in;
  }

  void print() {
    for (int i = 0; i <= top_index; i++) {
      cout << arr[i] << ' ';
    }
    cout << endl;
  }
};

int main() {
  Stack<int> st(5);
  cin >> st;
  cout << st;
}
