#pragma once
#include <iostream>

using std::ostream;

// Difference between template class, template typename
template <typename T> struct Node {
  T data;
  Node *next;
};

template <typename T> class LinkedList {
private:
  Node<T> *head;
  int size;

  // always remeber to delete unused Node
public:
  // assign the head to null
  LinkedList() : head(nullptr), size(0) {}

  int Size() const {
    return size;
  }

  // delete all nodes in the list
  ~LinkedList() {
    // loop, delete current, advance
    while (head) {
      Node<T> *temp = head;
      head = head->next;
      delete temp;
    }
  }

  // for debugging
  friend ostream &operator<<(ostream &os, const LinkedList<T> &list) {
    Node<T> *current = list.head;
    os << "Size: " << list.size << " List: ";
    while (current) {
      os << current->data;
      current = current->next;
      if (current)
        os << " -> ";
    }
    os << '\n';
    return os;
  }

  // insert a new node at the given index
  void insertAt(int index, const T &data) {
    // check for size, and non-negative index
    // update size
    if (size == 0 && index == 0) {
      head = new Node<T>;
      head->data = data;
      size++;
    }
    if (index >= 0 && index < size) {
      Node<T> *current = head;
      // we need to stop before index so that we can insert at index
      for (int i = 0; i < index - 1; i++)
        current = current->next;

      Node<T> *t = new Node<T>;
      t->data = data;
      t->next = current->next;
      current->next = t;
      size++;
    }
  }

  // remove the node at the given index
  void removeAt(int index) {
    // check for size, and non-negative index
    // update size
    if (index == 0 && size > 0) {
      Node<T> *temp = head;
      head = head->next;
      delete temp;
      size--;
    }
    if (index > 0 && index < size) {
      Node<T> *current = head;
      for(int i = 0; i < index - 1; i++) {
        current = current->next; 
      }
      Node<T> *nxt = current->next;
      current->next = nxt->next;
      delete nxt;
      size--;
    }
  }

  // return the node at the given index
  T operator[](int index) {
    // check for size, and non-negative index
    if (index >= 0 && index < size) {
      Node <T> *current = head;
      for(int i = 0; i < index; i++) {
        current = current->next;
      }
      return current->data;
    }
    return T();
  }

  // insert a new node at the end of the list
  void insertLast(const T &data) {
    // insertAt(size, data);
    if (size == 0) {
      head = new Node<T>;
      head->data = data;
      size++;
      return;
    }
    Node<T> *current = head;
    // stop at the node before null
    while (current->next) {
      current = current->next;
    }
    Node<T> *temp = new Node<T>;
    temp->data = data;
    temp->next = NULL;
    current->next = temp;
    size++;
  }

  // remove the last node
  void removeLast() {
    // removeAt(size-1);
    if (size > 0) {
      if (size == 1) {
        delete head;
        head = nullptr;
        size--;
        return;
      } else if (size == 2) {
        delete head->next;
        head->next = nullptr;
        size--;
        return;
      }
      Node<T> *prev = head;
      Node<T> *current = head->next;

      while (current->next) {
        prev = current;
        current = current->next;
      }
      prev->next = nullptr;
      delete current;
      size--;
    }
  }

  // insert a new node at the beginning of the list
  void insertFirst(const T &data) {
    // insertAt(0, data);
    Node<T> *temp = new Node<T>;
    temp->next = temp;
    temp->data = data;

    temp->next = head;
    head = temp;
    size++;
  }

  // remove the first node
  void removeFirst() {
    // removeAt(0);
    if (size == 1) {
      delete head;
      head = nullptr;
      size--;
      return;
    }

    if (size > 0) {
      Node<T> *temp = head;
      head = head->next;

      size--;
      delete temp;
    }
  }
};
