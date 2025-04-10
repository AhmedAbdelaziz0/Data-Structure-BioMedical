#pragma once
#include <iostream>

template <typename T> class Queue {
private:
  T *arr;
  int max_size;
  int size;

  // front contains the index of the front element
  int front;

  // back contains the index of the last element
  int back;

public:
  // constructor that allocates memory
  // set max_size to s which has default value of 5
  Queue(int s = 5) : size(0), front(0), back(0), max_size(s) { arr = new T[s]; }

  // destructor that clears the queue and free memory
  ~Queue() { delete[] arr; }

  // for debug
  void print() const {
    for (int i = 0; i < size; i++)
      std::cout << arr[(i + front) % max_size] << ' ';
    std::cout << std::endl;
  }

  // check if the queue is full (how is front relate to back)
  bool is_full() const { return size == max_size; }

  // check if the queue is empty
  bool is_empty() const { return size == 0; }

  // emplace the data at the end of the queue (at back) and advance back index
  void enqueue(T data) {
    if (!is_full()) {
      arr[back] = data;
      back = (back + 1) % max_size;
      size++;
    }
  }

  // remove and return the data at the beginning of the queue (at front) and
  // advance front index
  T dequeue() {
    if (!is_empty()) {
      T data = arr[front];
      front = (front + 1) % max_size;
      size--;
      return data;
    }
    return T();
  }

  friend std::ostream& operator<<(std::ostream& os, const Queue& q) {
    for (int i = 0; i < q.size; i++)
      os << q.arr[(i + q.front) % q.max_size] << ' ';
    return os;
  }

};
