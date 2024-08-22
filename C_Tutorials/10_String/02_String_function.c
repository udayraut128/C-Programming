#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello";
    char dest[20];
    printf("Length of string: %zu\n", strlen(str)); // Output: 5

    strcpy(dest, str); // Copy src to dest

    printf("Source: %s\n", str);       // Output: Hello
    printf("Destination: %s\n", dest); // Output: Hello

    char str1[20] = "Hello";
    char str2[] = " World";

    strcat(str1, str2); // Concatenate str2 to str1

    printf("Concatenated string: %s\n", str1); // Output: Hello World

    return 0;
}

// OUTPUT
// Length of string: 5
// Source: Hello
// Destination: Hello
// Concatenated string: Hello World