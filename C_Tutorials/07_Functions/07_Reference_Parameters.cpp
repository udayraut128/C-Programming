#include <iostream>
using namespace std;

// Function declaration
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10;
    int y = 20;

    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(x, y); // Function call
    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}

// output
// Before swap: x = 10, y = 20
// After swap: x = 20, y = 10