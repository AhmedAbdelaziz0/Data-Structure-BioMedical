# Sheet 6

In this sheet we will implement Stack and Queue data structure.

## Stack

### Start with the stack file and implement it.
- it is a stack with constant size (10)
- it has basic methods (top, pop, push, isEmpty, isFull)
- it is a stack of integers
- if the you reach the max size, print error message and exit.

### Modify the stack class:

- Make it more generic by making it template class, you must use single file that contain the whole class (no more `.cpp` and `.h` only `.h`) to avoid linking errors.
**Hint:**

```cpp
template <typename T>
class Stack {
    T arr[10];
};
```

- The size of the stack should be dynamically allocated (use new in constructor
and delete in destructor), the size is either default `80` or given by the class user.
```cpp
Stack<float> st; // size = 80
Stack<float> st(1000); // size = 1000
```

## Queue

### Implement the queue data structure.
Write the whole class in a single file.
