#include <stdio.h>

int main()
{
    int a = 10, b = 20;

    // Using the ternary operator to find the maximum
    int max = (a > b) ? a : b;

    printf("Maximum value is: %d\n", max); // 20

    return 0;
}

// output
// Maximum value is : 20