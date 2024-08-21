// A datatype in programming defines the type of data that a variable can hold, such as integers, floating-point numbers, characters, or boolean values. It determines the operations that can be performed on the data and how the data is stored in memory.

#include <stdio.h>

// Structure
struct Person
{
    char name[50];
    int age;
    float height;
};

// Enumeration
enum Weekday
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main()
{
    // Basic data types
    int num = 10;
    float temperature = 36.6;
    double pi = 3.141592653589793;
    char letter = 'A';

    // Array
    char name[] = "Alice";

    // Pointer
    int *ptr = &num;

    // Structure
    struct Person person1;
    person1.age = 30;

    // Union
    union Data
    {
        int i;
        float f;
        char str[20];
    };

    union Data data;
    data.i = 10;

    // Enumeration
    enum Weekday today = Wednesday;

    printf("Integer: %d\n", num);
    printf("Float: %.1f\n", temperature);
    printf("Double: %.15f\n", pi);
    printf("Char: %c\n", letter);
    printf("Array: %s\n", name);
    printf("Pointer: %d\n", *ptr);
    printf("Structure Age: %d\n", person1.age);
    printf("Union: %d\n", data.i);
    printf("Enum: %d (Wednesday)\n", today);

    return 0;
}

// output
// Integer: 10
// Float: 36.6
// Double: 3.141592653589793
// Char: A
// Array: Alice
// Pointer: 10
// Structure Age: 30
// Union: 10
// Enum: 3 (Wednesday)