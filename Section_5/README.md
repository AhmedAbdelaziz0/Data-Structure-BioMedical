# Sheet 5

1. Write a program that reads a group of numbers from the user and places them in an array
of type `float`. Once the numbers are stored in the array, the program should average
them and print the result. Use pointer notation wherever possible.

2. Suppose you have a `main()` with three local arrays, all the same size and type (say
`float`). The first two are already initialized to values. Write a function called
`addarrays()` that accepts the addresses of the three arrays as arguments; adds the con-
tents of the first two arrays together, element by element; and places the results in the
third array before returning. A fourth argument to this function can carry the size of the
arrays. Use pointer notation throughout; the only place you need brackets is in defining
the arrays.

```cpp
void addarrays(float* a, float *b, float *sum, int size);

int main() {
    const int size = 5;
    float arr1[size] = {1, 2, 3, 4, 5};
    float arr2[size] = {6, 7, 8, 9, 10};
    float arr_result[size] = {0}; // what does this do?
    addarrays(arr1, arr2, arr_result, size);
    // print result

    return 0;
}
```

3. Make your own version of the library function `strcmp(s1, s2)`, which compares two
strings and returns `-1` if `s1` comes first alphabetically, `0` if `s1` and `s2` are the same, and `1`
if `s2` comes first alphabetically. Call your function `compstr()`. It should take two `char*` strings as arguments, compare them character by character, and return an `int`. Write a
`main()` program to test the function with different combinations of strings. Use pointer
notation throughout.

4. When writing large project, and when dealing with pointers we have no
   guarantee that other parts of the program won't change the value of the pointer.

   Modify the functoin `addarrays` to guarantee that the passed arrays are not modified.

5. Let’s say that you need to store `100 integers` so that they’re easily accessible.
However, let’s further assume that there’s a problem: The memory in your computer is so fragmented that the largest array that you can use holds only `10 integers`. (Such problems actually arise, although usually with larger memory objects.)

You can solve this problem by defining `10 separate int arrays` of `10 integers` each, and an array of `10` pointers to these arrays.

The int arrays can have names like `a0`, `a1`, `a2`, and so on. The address of each of these arrays can be stored in the pointer array of type `int*`, which can have a name like ap (for array of pointers).

You can then access individual integers using expressions like `ap[j][k]`, where `j` steps through the pointers in `ap` and `k` steps through individual integers in each array.

This looks as if you’re accessing a two-dimensional array, but it’s really a group of one-dimensional arrays. Fill such a group of arrays with test data (say the numbers `0`, `10`, `20`, and so on up to `990`).

Then display the data to make sure it’s correct.

6. As presented, `Exercise 5` is rather inelegant because each of the `10 int` arrays is declared
in a different program statement, using a different name. Each of their addresses must
also be obtained using a separate statement. You can simplify things by using new, which
allows you to allocate the arrays in a loop and assign pointers to them at the same time:

```cpp
for(j=0; j<NUMARRAYS; j++)          // allocate NUMARRAYS arrays
    *(ap+j) = new int[MAXSIZE];     // each MAXSIZE ints long
```

Rewrite the program in `Exercise 5` to use this approach. You can access the elements of
the individual arrays using the same expression mentioned in `Exercise 5`, or you can use
pointer notation: `*(*(ap+j)+k)`. The two notations are equivalent.
