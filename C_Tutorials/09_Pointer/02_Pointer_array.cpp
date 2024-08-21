#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer pointing to the first element of the array

    cout << "Array elements using pointer:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " "; // Accessing array elements using pointer arithmetic
    }

    return 0;
}

// output
// Array elements using pointer:
// 10 20 30 40 50