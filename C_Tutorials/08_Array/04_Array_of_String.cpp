#include <iostream>
using namespace std;

int main()
{
    char words[3][10] = {"Hello", "World", "C++"}; // 3 strings, each with max length 10

    cout << "Array of Strings:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << words[i] << endl;
    }

    return 0;
}

// output
// Array of Strings:
// Hello
// World
// C++
