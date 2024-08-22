#include <stdio.h>

// Function Declaration
int factorial(int n)
{
    if (n <= 1)
        return 1; // Base case
    else
        return n * factorial(n - 1); // Recursive case
}

int main()
{
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}

// output
// Factorial of 5 is 120