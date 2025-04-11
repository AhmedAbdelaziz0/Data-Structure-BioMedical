#pragma once
#include <iostream>

using std::ostream;

template <typename T>
struct Node {
  T data;
  Node *next;
};

template <typename T>
class LinkedList {
private:
  Node<T> *head;
  int size;

  // always remeber to delete unused Node
public:
  // assign the head to null
  LinkedList() {

  }

  // delete all nodes in the list
  ~LinkedList() {

  }

  // for debugging
  friend ostream& operator<<(ostream& os, const LinkedList<T>& list) {

  }

  // insert a new node at the given index
  void insertAt(int index, const T& data) {

  }

  // remove the node at the given index
  void removeAt(int index) {

  }

  // return the node at the given index
  T operator[](int index) {

  }


  // insert a new node at the end of the list
  void insertLast(const T& data) {

  }

  // remove the last node
  void removeLast() {

  }


  // insert a new node at the beginning of the list
  void insertFirst(const T& data) {

  }

  // remove the first node
  void removeFirst() {

  }
};
