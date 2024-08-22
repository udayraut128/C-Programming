#include <stdio.h>

int main()
{
    FILE *file = fopen("example.txt", "r");
    char buffer[100];

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Read and print the file content using fgets
    while (fgets(buffer, sizeof(buffer), file))
    {
        printf("%s", buffer);
    }

    fclose(file); // Close the file

    return 0;
}
