#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str;
    str = (char *)malloc(50 * sizeof(char)); // Allocate memory for a string

    if (str == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    strcpy(str, "Hello, dynamic memory!");
    printf("%s\n", str);

    free(str); // Deallocate the memory

    return 0;
}

// output
// Hello, dynamic memory !