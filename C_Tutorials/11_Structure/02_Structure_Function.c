#include <stdio.h>

// Define the structure outside of main
struct Person
{
    char name[50];
    int age;
    float height;
};

// Function that takes a structure as an argument
void printPerson(struct Person p)
{
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Height: %.2f\n", p.height);
}

int main()
{
    // Declare and initialize a variable of type 'struct Person'
    struct Person person1;
    snprintf(person1.name, sizeof(person1.name), "Bob");
    person1.age = 25;
    person1.height = 6.0;

    // Call the function with the structure
    printPerson(person1);

    return 0;
}

// output
// Name: Bob
// Age: 25
// Height: 6.00