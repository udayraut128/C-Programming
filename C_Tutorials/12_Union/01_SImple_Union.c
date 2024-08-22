#include <stdio.h>

// Define a union
union Data
{
    int i;
    float f;
    char str[20];
};

int main()
{
    union Data data;

    // Assign and print integer
    data.i = 10;
    printf("data.i: %d\n", data.i);

    // Assign and print float (overwrites the previous data)
    data.f = 220.5;
    printf("data.f: %.2f\n", data.f);

    // Assign and print string (overwrites the previous data)
    snprintf(data.str, sizeof(data.str), "Hello");
    printf("data.str: %s\n", data.str);

    // Note: Accessing data.i or data.f here is undefined behavior
    // because data.str is the last assigned member

    return 0;
}

// output
// data.i: 10
// data.f: 220.50
// data.str: Hello