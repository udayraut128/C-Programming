#include <iostream>
#include <string> // Include the string header
using namespace std;

int main()
{
    string str = "Hello, World!";

    cout << "std::string: " << str << endl;

    // String concatenation
    string name = "Coder";
    str = str + " " + name;
    cout << "Concatenated String: " << str << endl;

    // Getting the length of the string
    cout << "Length of String: " << str.length() << endl;

    // Accessing and modifying characters
    str[7] = 'C';
    cout << "Modified String: " << str << endl;

    return 0;
}

// output
// std::string: Hello, World!
// Concatenated String: Hello, World! Coder
// Length of String: 19
// Modified String: Hello, Corld! Coder