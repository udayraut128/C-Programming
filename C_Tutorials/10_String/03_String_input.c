#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str); // Reads a string (up to 99 characters)

    printf("You entered: %s\n", str);

    return 0;
}

// output
// Enter a string: hello
// You entered: hello

#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Reads a line of text

    printf("You entered: %s", str); // fgets includes the newline character

    return 0;
}

// output
// Enter a string: hello world
// You entered: hello world