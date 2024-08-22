#include <stdio.h>

int main()
{
    int a = 10;

    printf("a = %d\n", a);     // 10
    printf("++a = %d\n", ++a); // 11 (pre-increment)
    printf("a++ = %d\n", a++); // 11 (post-increment)
    printf("a = %d\n", a);     // 12
    printf("--a = %d\n", --a); // 11 (pre-decrement)
    printf("a-- = %d\n", a--); // 11 (post-decrement)
    printf("a = %d\n", a);     // 10

    return 0;
}

// output
// a = 10
// ++a = 11
// a++ = 11
// a = 12
// --a = 11
// a-- = 11
// a = 10