#include <stdio.h>

// A simple function that takes two integers and returns their sum
int add(int a, int b)
{
    return a + b;
}

int main()
{
    // Declare a function pointer that can point to functions like 'add'
    int (*func_ptr)(int, int);

    // Point the function pointer to the 'add' function
    func_ptr = &add;

    // Call the function using the pointer
    int result = func_ptr(3, 4);    // Equivalent to add(3, 4)
    printf("Result: %d\n", result); // Output: Result: 7

    return 0;
}

// output
// Result : 7