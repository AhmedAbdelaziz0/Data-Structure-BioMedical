#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() {

}

void LinkedList::insertLast(int data) {

}

void LinkedList::removeLast() {

}

int LinkedList::getLast() {

}

LinkedList::~LinkedList() {

}

void LinkedList::print() const {
  Node *current = head;
  while (current) {
    std::cout << current->data << ' ';
    current = current->next;
  }
  std::cout << std::endl;
}
