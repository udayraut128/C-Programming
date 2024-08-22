#include <stdio.h>

// Function declaration
int getNumber()
{
    return 42; // Returns an integer value
}

int main()
{
    int number = getNumber(); // Call the function and store the return value
    printf("Number: %d\n", number);
    return 0;
}

// output
// Number: 42