#include <stdio.h>

int main()
{
    int a = 1, b = 0;

    printf("a && b: %d\n", a && b); // 0 (false)
    printf("a || b: %d\n", a || b); // 1 (true)
    printf("!a: %d\n", !a);         // 0 (false)
    printf("!b: %d\n", !b);         // 1 (true)

    return 0;
}

// output
// a && b: 0
// a || b: 1
// !a: 0
// !b: 1