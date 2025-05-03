#include <iostream>

using namespace std;

template <typename T> class Queue {
private:
  T *arr;
  int max_size;
  int _size;
  int f;
  int r;

public:
  Queue(int max_size) : max_size(max_size), f(0), r(0), _size(0) {
    arr = new T[max_size];
  }

  ~Queue() { delete[] arr; }

  bool isFull() const { return _size == max_size; }

  bool isEmpty() const { return _size == 0; }

  void enqueue(T elem) {
    if (isFull()) {
      cout << "Full\n";
      return;
    }
    arr[r] = elem;
    r = (r + 1) % max_size;
    _size++;
  }

  T dequeue() {
    if (isEmpty()) {
      cout << "Empty\n";
      return T();
    }
    T temp = arr[f];
    f = (f + 1) % max_size;
    _size--;
    return temp;
  }

  void print() const {
    for (int i = 0; i < _size; i++) {
      cout << arr[(i + f) % max_size] << ' ';
    }

    int i = f;
    while (i != r && !isEmpty()) {
      cout << arr[i] << ' ';
      i = (i + 1) % max_size;
    }
    cout << endl;
  }
};

int main() {
  Queue<int> q(10);
  q.enqueue(0);
  q.enqueue(1);
  q.enqueue(2);
  q.print();

  for (int i = 0; i < 100; i++) {
    q.enqueue(i);
    q.dequeue();
  }
  q.print();
}
