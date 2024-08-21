#include <iostream>
using namespace std;

// Function declarations
int multiply(int a, int b)
{
    return a * b;
}

double multiply(double a, double b)
{
    return a * b;
}

int main()
{
    cout << "Multiplying integers: " << multiply(5, 3) << endl;
    cout << "Multiplying doubles: " << multiply(5.5, 3.2) << endl;
    return 0;
}

// output
// Multiplying integers : 15 Multiplying doubles : 17.6