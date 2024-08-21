#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    cout << "Two-Dimensional Array (Matrix):" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// output
// Two-Dimensional Array (Matrix):
// 1 2 3 
// 4 5 6 
// 7 8 9 
