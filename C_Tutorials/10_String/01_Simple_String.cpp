#include <iostream>
using namespace std;

int main()
{
    char str[20] = "Hello, World!";

    cout << "C-Style String: " << str << endl;

    // Modifying a character
    str[7] = 'C';
    cout << "Modified String: " << str << endl;

    return 0;
}

// output
// C-Style String: Hello, World!
// Modified String: Hello, Corld!