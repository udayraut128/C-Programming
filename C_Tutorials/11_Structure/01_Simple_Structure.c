#include <stdio.h>

// Define the structure outside of main
struct Person
{
    char name[50];
    int age;
    float height;
};

int main()
{
    // Declare and initialize a variable of type 'struct Person'
    struct Person person1;

    // Assign values to the structure members
    snprintf(person1.name, sizeof(person1.name), "Alice");
    person1.age = 30;
    person1.height = 5.7;

    // Print the values of the structure members
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    return 0;
}

// output
// Name: Alice
// Age: 30
// Height: 5.70