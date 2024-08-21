#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello, World!";

    // Substring
    string sub = str.substr(7, 5); // Extracts "World"
    cout << "Substring: " << sub << endl;

    // Find a character or substring
    size_t pos = str.find('W');
    if (pos != string::npos)
    {
        cout << "'W' found at position: " << pos << endl;
    }

    // Replace part of the string
    str.replace(7, 5, "Coder");
    cout << "After Replacement: " << str << endl;

    return 0;
}

// output
// Substring: World
// 'W' found at position: 7
// After Replacement: Hello, Coder!