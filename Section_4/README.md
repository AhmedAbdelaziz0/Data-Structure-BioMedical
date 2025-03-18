# Sheet 4

1. Write a function called `reversit()` that reverses a `C-string` (an array of `char`). Use a `for`
loop that swaps the first and last characters, then the second and next-to-last characters,
and so on. The string should be passed to `reversit()` as an argument.

2. Start with a program that allows the user to input a number of integers, and then stores
them in an int array. Write a function called `maxint()` that goes through the array,
element by element, looking for the largest one. The function should take as arguments
the address of the array and the number of elements in it, and return the index number of
the largest element. The program should call this function and then display the largest
element and its index number.

3. Another weakness of C++ is that it does not automatically check array indexes to see
whether they are in bounds. (This makes array operations faster but less safe.) We can
use a class to create a safe array that checks the index of all array accesses.
Write a class called safearay that uses an int array of fixed size (call it LIMIT) as its
only data member. There will be two member functions. The first, `putel()`, takes an
index number and an int value as arguments and inserts the int value into the array at
the index. The second, `getel()`, takes an index number as an argument and returns the
int value of the element with that index.

```
safearay sa1;
int temp = 12345;
sa1.putel(7, temp);
temp = sa1.getel(7);
// define a safearay object
// define an int value
// insert value of temp into array at index 7
// obtain value from array at index 7
```

Both functions should check the index argument to make sure it is not less than 0 or
greater than LIMIT-1. You can use this array without fear of writing over other parts of
memory.

Using functions to access array elements doesn’t look as eloquent as using the `[] operator`. In Chapter 8 we’ll see how to overload this operator to make our safearay
class work more like built-in arrays.
