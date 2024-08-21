#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str); // Reads an entire line of text including spaces

    cout << "You entered: " << str << endl;

    return 0;
}

// output
// Enter a string: Uday Raut
// You entered: Uday Raut