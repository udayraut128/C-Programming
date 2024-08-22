#include <stdio.h>

// Define a union
union Value
{
    int i;
    float f;
};

// Define a structure with a union
struct Data
{
    int type;
    union Value value;
};

int main()
{
    struct Data data;

    // Set the type and value
    data.type = 1; // Indicates that value is an integer
    data.value.i = 10;
    printf("Type: %d, Value: %d\n", data.type, data.value.i);

    // Change the type and value
    data.type = 2; // Indicates that value is a float
    data.value.f = 220.5;
    printf("Type: %d, Value: %.2f\n", data.type, data.value.f);

    return 0;
}

// output
// Type: 1, Value: 10
// Type: 2, Value: 220.50