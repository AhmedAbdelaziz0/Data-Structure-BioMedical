#pragma once

class Stack {
  private:
    int top_index;
    int arr[10];

  public:
    Stack();

    bool isEmpty() const;

    bool isFull() const;

    void push(int data);

    void pop();

    int top() const;

    void print() const;
};
