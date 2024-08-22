#include <stdio.h>

union Example
{
    int i;
    float f;
    char c;
};

int main()
{
    printf("Size of union: %zu\n", sizeof(union Example)); // Output depends on the system

    return 0;
}

// output
// Size of union: 4
