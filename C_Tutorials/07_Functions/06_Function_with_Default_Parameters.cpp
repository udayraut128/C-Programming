#include <iostream>
using namespace std;

// Function declaration with default parameters
int power(int base, int exp = 2)
{
    int result = 1;
    for (int i = 0; i < exp; ++i)
    {
        result *= base;
    }
    return result;
}

int main()
{
    cout << "2^3 = " << power(2, 3) << endl;
    cout << "5^2 = " << power(5) << endl; // Uses default exponent of 2
    return 0;
}

// output
// 2^3 = 8
// 5^2 = 25