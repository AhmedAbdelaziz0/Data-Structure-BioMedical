#pragma once

struct Node {
  int data;
  Node *next;
};

class LinkedList {
private:
  Node *head;

public:
  // assign the head to null
  LinkedList();

  // insert a new node at the end of the list
  void insertLast(int data);

  // remove the last node
  void removeLast();

  // return the value of the last node
  int getLast();

  // for debugging
  void print() const;

  /* we can also implement the following functions but for now we will not.
  void insertFirst(int index, int data);
  void removeFirst(int index);
  void getFirst(int index);
  void insertAt(int index, int data);
  void removeAt(int index);
  void operator[](int index);
  */

  // delete all nodes in the list
  ~LinkedList();
};
