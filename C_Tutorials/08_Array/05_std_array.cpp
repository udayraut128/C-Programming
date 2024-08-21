#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> arr = {10, 20, 30, 40, 50}; // std::array with 5 elements

    cout << "std::array:" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }

    return 0;
}

// output
// std::array:
// Element at index 0: 10
// Element at index 1: 20
// Element at index 2: 30
// Element at index 3: 40
// Element at index 4: 50