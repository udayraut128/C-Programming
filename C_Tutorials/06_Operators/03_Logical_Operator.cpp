#include <iostream>
using namespace std;

int main()
{
    bool a = true, b = false;
    cout << (a && b) << endl; // Logical AND
    cout << (a || b) << endl; // Logical OR
    cout << (!a) << endl;     // Logical NOT
    return 0;
}

// output
// 0
// 1
// 0