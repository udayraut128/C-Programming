// A datatype in programming defines the type of data that a variable can hold, such as integers, floating-point numbers, characters, or boolean values. It determines the operations that can be performed on the data and how the data is stored in memory.


#include <iostream>
using namespace std;

int main()
{
    int myInt = 10;
    float myFloat = 3.14f;
    double myDouble = 3.14159;
    char myChar = 'A';
    bool myBool = true;
    string myString = "Hello, C++";

    cout << "Integer: " << myInt << endl;
    cout << "Float: " << myFloat << endl;
    cout << "Double: " << myDouble << endl;
    cout << "Char: " << myChar << endl;
    cout << "Boolean: " << myBool << endl;
    cout << "String: " << myString << endl;

    return 0;
}


// output
// Integer: 10
// Float: 3.14
// Double: 3.14159
// Char: A
// Boolean: 1
// String: Hello, C++