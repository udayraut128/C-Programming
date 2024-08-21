#include <iostream>
using namespace std;

int main()
{
    int d = 5;

    cout << "Increment/Decrement Operators:" << endl;
    cout << "d before increment: " << d << endl;
    d++;
    cout << "d++: " << d << endl; // Post-increment
    ++d;
    cout << "++d: " << d << endl; // Pre-increment
    d--;
    cout << "d--: " << d << endl; // Post-decrement
    --d;
    cout << "--d: " << d << endl; // Pre-decrement

    return 0;
}


// output
// Increment/Decrement Operators:
// d before increment: 5
// d++: 6
// ++d: 7
// d--: 6
// --d: 5