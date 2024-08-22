#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array;
    int n = 5;

    // Allocate memory for an array of 5 integers
    array = (int *)malloc(n * sizeof(int));

    if (array == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initialize and print the array
    for (int i = 0; i < n; i++)
    {
        array[i] = i + 1;
        printf("array[%d] = %d\n", i, array[i]);
    }

    // Deallocate the memory
    free(array);

    return 0;
}

// output
// array[0] = 1
// array[1] = 2
// array[2] = 3
// array[3] = 4
// array[4] = 5