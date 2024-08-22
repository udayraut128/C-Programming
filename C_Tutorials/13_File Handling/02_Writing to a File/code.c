#include <stdio.h>

int main()
{
    FILE *file = fopen("example.txt", "w");

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(file, "Hello, world!\n");       // Write formatted text
    fputs("Writing another line.\n", file); // Write a string
    fclose(file);                           // Close the file

    return 0;
}
