#include <stdio.h>

int main()
{
    int a = 10, b = 20;

    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    return 0;
}

// output
// a == b: 0
// a != b: 1
// a > b: 0
// a < b: 1
// a >= b: 0
// a <= b: 1