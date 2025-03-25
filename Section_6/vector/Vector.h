#pragma once

class Vector {
  private:
    float *arr;
    unsigned int _max_size;
    unsigned int _size;

  public:
    // Constructor that create array with the given size and reserve the memory
    // it also sets the _size and _max_size
    Vector(int initial_size = 10);

    // Destructor that clear the memory
    ~Vector();

    // return the currnet size of the array
    unsigned int size() const;
    
    // append new value to the array
    // it should dynamiclly increase the maximum size, you can do this by
    // doubling the array.
    void append(float value);

    // return the value at index, if the index is out of range return 0 and
    // print "<index> out of range"
    float operator[](unsigned int index) const;

    // delete value at index.
    void remove(unsigned int index);

    // insert value at index, you should shift all values after the index
    // then place index there.
    void insert(unsigned int index, float value);
};
