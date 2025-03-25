#include "Vector.h"

// Constructor that create array with the given size and reserve the memory
// it also sets the _size and _max_size
Vector::Vector(int initial_size) {

}

// Destructor that clear the memory
Vector::~Vector() {

}

// return the currnet size of the array
unsigned int Vector::size() const {

}

// append new value to the array
// it should dynamiclly increase the maximum size, you can do this by
// doubling the array.
void Vector::append(float value) {

}

// return the value at index, if the index is out of range return 0 and
// print "<index> out of range"
float Vector::operator[](unsigned int index) const {

}

// delete value at index.
void Vector::remove(unsigned int index) {

}

// insert value at index, you should shift all values after the index
// then place index there.
void Vector::insert(unsigned int index, float value) {

}
