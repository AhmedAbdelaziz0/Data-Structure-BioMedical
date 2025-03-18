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
