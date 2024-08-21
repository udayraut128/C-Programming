#include <iostream>
using namespace std;

// Function declaration
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int sum = add(10, 5); // Function call
    cout << "Sum: " << sum << endl;
    return 0;
}

// output
// Sum : 15