#include <stdio.h>

int main()
{
    FILE *file = fopen("example.txt", "w"); // Open file for writing ("w" mode)

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Use the file...

    fclose(file); // Close the file
    return 0;
}
