#include <stdio.h>

int main()
{
    FILE *file = fopen("example.txt", "r");

    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    // Example of error checking
    if (ferror(file))
    {
        perror("Error reading from file");
    }

    fclose(file);
    return 0;
}
