#include <stdio.h>

int main()
{
    // Declare and initialize an array of strings
    const char *colors[] = {"Red", "Green", "Blue", "Yellow"};

    // Access and print each string
    for (int i = 0; i < 4; i++)
    {
        printf("Color %d: %s\n", i + 1, colors[i]);
    }

    return 0;
}

// output
// Color 1: Red
// Color 2: Green
// Color 3: Blue
// Color 4: Yellow

#include <stdio.h>

int main()
{
    // Declare and initialize an array of strings
    const char *fruits[] = {"Apple", "Banana", "Cherry", "Date"};

    // Modify a string in the array
    fruits[1] = "Blueberry";

    // Access and print each string
    for (int i = 0; i < 4; i++)
    {
        printf("Fruit %d: %s\n", i + 1, fruits[i]);
    }

    return 0;
}


// output
// Fruit 1: Apple
// Fruit 2: Blueberry
// Fruit 3: Cherry
// Fruit 4: Date

#include <stdio.h>

int main()
{
    // Declare and initialize an array of strings
    const char *cities[] = {
        "New York",
        "Los Angeles",
        "Chicago",
        "Houston"};

    // Access and print each string
    for (int i = 0; i < 4; i++)
    {
        printf("City %d: %s\n", i + 1, cities[i]);
    }

    return 0;
}

// output
// City 1: New York
// City 2: Los Angeles
// City 3: Chicago
// City 4: Houston