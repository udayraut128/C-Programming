#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr; // Pointer to the first element of the array

    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d\n", i, *(ptr + i));
    }

    return 0;
}

// output
// arr[0] = 1
// arr[1] = 2
// arr[2] = 3
// arr[3] = 4
// arr[4] = 5