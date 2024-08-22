#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array;
    int n = 5;

    // Allocate memory for an array of 5 integers and initialize to zero
    array = (int *)calloc(n, sizeof(int));

    if (array == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Print the array (all values should be zero)
    for (int i = 0; i < n; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

    // Deallocate the memory
    free(array);

    return 0;
}

// output
// array[0] = 0
// array[1] = 0
// array[2] = 0
// array[3] = 0
// array[4] = 0