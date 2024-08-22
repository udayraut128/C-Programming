#include <stdio.h>

// Function Declaration
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result;
    // Function Call and return value assignment
    result = add(10, 20);
    printf("Result: %d\n", result);
    return 0;
}

// output
// Sum : 30