#include <stdio.h>

int main()
{
    int a;
    float b;
    double c;
    char d;

    printf("Size of int: %zu bytes\n", sizeof(a));    // Size of an int
    printf("Size of float: %zu bytes\n", sizeof(b));  // Size of a float
    printf("Size of double: %zu bytes\n", sizeof(c)); // Size of a double
    printf("Size of char: %zu bytes\n", sizeof(d));   // Size of a char

    return 0;
}
// output
// Size of int: 4 bytes
// Size of float: 4 bytes
// Size of double: 8 bytes
// Size of char: 1 bytes
