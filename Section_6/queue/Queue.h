#pragma once
#include <iostream>

template <typename T> class Queue {
private:
  T *q;
  int max_size;
  int size;

  // front contains the index of the front element
  int front;

  // back contains the index of the last element
  int back;

public:
  // constructor that allocates memory
  // set max_size to s which has default value of 5
  Queue(int s = 5);

  // destructor that clears the queue and free memory
  ~Queue();

  // for debug
  void print() const;

  // check if the queue is full (how is front relate to back)
  bool is_full() const;

  // check if the queue is empty
  bool is_empty();

  // emplace the data at the end of the queue (at back) and advance back index
  void enqueue(T data);

  // remove and return the data at the beginning of the queue (at front) and
  // advance front index
  T dequeue();
};
