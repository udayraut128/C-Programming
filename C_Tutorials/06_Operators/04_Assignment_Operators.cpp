#include <iostream>
using namespace std;

int main()
{
    int c = 10;

    cout << "Assignment Operators:" << endl;
    c += 5;
    cout << "c += 5: " << c << endl; // Addition assignment
    c -= 3;
    cout << "c -= 3: " << c << endl; // Subtraction assignment
    c *= 2;
    cout << "c *= 2: " << c << endl; // Multiplication assignment
    c /= 4;
    cout << "c /= 4: " << c << endl; // Division assignment
    c %= 3;
    cout << "c %= 3: " << c << endl; // Modulus assignment

    return 0;
}

// output
// Assignment Operators:
// c += 5: 15
// c -= 3: 12
// c *= 2: 24
// c /= 4: 6
// c %= 3: 0