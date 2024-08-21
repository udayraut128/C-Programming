#include <iostream>
using namespace std;

int main()
{
    int var = 10;
    int *ptr = &var;   // Pointer to an integer
    int **ptr2 = &ptr; // Pointer to pointer

    cout << "Value of var: " << var << endl;
    cout << "Value using ptr: " << *ptr << endl;
    cout << "Value using ptr2: " << **ptr2 << endl; // Dereferencing twice

    return 0;
}


// output
// Value of var: 10
// Value using ptr: 10
// Value using ptr2: 10