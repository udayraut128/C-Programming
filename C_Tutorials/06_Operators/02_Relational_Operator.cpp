#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 5;
    cout << (a == b) << endl; // Equal to
    cout << (a != b) << endl; // Not equal to
    cout << (a > b) << endl;  // Greater than
    cout << (a < b) << endl;  // Less than
    cout << (a >= b) << endl; // Greater than or equal to
    cout << (a <= b) << endl; // Less than or equal to
    return 0;
}

// output
// 0
// 1
// 1
// 0
// 1
// 0