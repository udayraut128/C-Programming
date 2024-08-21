#include <stdio.h>

int main()
{
    // Integer variable
    int age = 25;
    printf("Age: %d\n", age);

    // Floating-point variable
    float temperature = 36.6;
    printf("Temperature: %.1f\n", temperature);

    // Character variable
    char grade = 'A';
    printf("Grade: %c\n", grade);

    // String (array of characters)
    char name[] = "John";
    printf("Name: %s\n", name);

    // Double variable
    double pi = 3.141592653589793;
    printf("Value of Pi: %.15f\n", pi);

    // Multiple variable declarations
    int a = 10, b = 20, c = 30;
    printf("a: %d, b: %d, c: %d\n", a, b, c);

    return 0;
}

// output
// Age: 25
// Temperature: 36.6
// Grade: A
// Name: John
// Value of Pi: 3.141592653589793
// a: 10, b: 20, c: 30