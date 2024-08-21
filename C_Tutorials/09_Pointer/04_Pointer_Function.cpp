#include <iostream>
using namespace std;

void increment(int *ptr)
{
    (*ptr)++; // Increment the value at the address stored in ptr
}

int main()
{
    int var = 10;
    cout << "Before increment: " << var << endl;

    increment(&var); // Passing the address of var to the function

    cout << "After increment: " << var << endl;

    return 0;
}

// output
// Before increment: 10
// After increment: 11