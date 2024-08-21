#include <iostream>
using namespace std;

int main()
{
    int var = 10;    // Normal variable
    int *ptr = &var; // Pointer variable storing the address of var

    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;
    cout << "Pointer ptr stores address: " << ptr << endl;
    cout << "Value at the address stored in ptr: " << *ptr << endl; // Dereferencing the pointer

    return 0;
}

// output
// Value of var: 10
// Address of var: 0x7ffc435bc214
// Pointer ptr stores address: 0x7ffc435bc214
// Value at the address stored in ptr: 10