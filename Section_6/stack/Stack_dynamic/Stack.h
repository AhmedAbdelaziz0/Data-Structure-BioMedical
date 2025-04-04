#pragma once

class Stack {
private:
  int top_index;
  int size;
  int *arr;

public:
  Stack(int size = 80);

  bool isEmpty() const;

  bool isFull() const;

  void push(int data);

  void pop();

  int top() const;

  void print() const;

  ~Stack();
};
