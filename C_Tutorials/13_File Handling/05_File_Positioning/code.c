#include <stdio.h>

int main()
{
    FILE *file = fopen("example.txt", "r");
    long position;

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Move the file position to the end
    fseek(file, 0, SEEK_END);
    position = ftell(file); // Get the position (size of the file)
    printf("File size: %ld bytes\n", position);

    // Move the file position to the beginning
    rewind(file);

    fclose(file); // Close the file

    return 0;
}
