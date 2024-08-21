#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50}; // Declaration and initialization

    cout << "One-Dimensional Array:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }

    return 0;
}

// output
// One-Dimensional Array:
// Element at index 0: 10
// Element at index 1: 20
// Element at index 2: 30
// Element at index 3: 40
// Element at index 4: 50