#include <stdio.h>

int main()
{
    int a = 10, b = 5;

    a += b;                    // Equivalent to a = a + b
    printf("a += b: %d\n", a); // 15

    a -= b;                    // Equivalent to a = a - b
    printf("a -= b: %d\n", a); // 10

    a *= b;                    // Equivalent to a = a * b
    printf("a *= b: %d\n", a); // 50

    a /= b;                    // Equivalent to a = a / b
    printf("a /= b: %d\n", a); // 10

    a %= b;                     // Equivalent to a = a % b
    printf("a %%= b: %d\n", a); // 0

    return 0;
}

// output
// a += b: 15
// a -= b: 10
// a *= b: 50
// a /= b: 10
// a %= b: 0