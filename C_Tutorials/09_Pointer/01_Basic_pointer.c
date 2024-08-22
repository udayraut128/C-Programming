#include <stdio.h>

int main()
{
    int num = 10;
    int *ptr = &num; // Pointer to num

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void *)&num);
    printf("Pointer ptr holds address: %p\n", (void *)ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    return 0;
}

// output
// Value of num: 10
// Address of num: 0x7ffc1a244024
// Pointer ptr holds address: 0x7ffc1a244024
// Value pointed to by ptr: 10
