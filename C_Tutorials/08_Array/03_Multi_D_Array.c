#include <stdio.h>

int main()
{
    // Declare a 3D array with 2 layers, 3 rows, and 4 columns
    int tensor[2][3][4] = {
        {{1, 2, 3, 4},
         {5, 6, 7, 8},
         {9, 10, 11, 12}},
        {{13, 14, 15, 16},
         {17, 18, 19, 20},
         {21, 22, 23, 24}}};

    // Accessing elements of the 3D array
    printf("Element at [0][1][2]: %d\n", tensor[0][1][2]); // Output: 7
    printf("Element at [1][2][3]: %d\n", tensor[1][2][3]); // Output: 24

    // Loop through the 3D array and print all elements
    printf("3D Array elements:\n");
    for (int i = 0; i < 2; i++)
    {
        printf("Layer %d:\n", i);
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("%d ", tensor[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

// output
// Element at [0][1][2]: 7
// Element at [1][2][3]: 24
// 3D Array elements:
// Layer 0:
// 1 2 3 4 
// 5 6 7 8 
// 9 10 11 12 

// Layer 1:
// 13 14 15 16 
// 17 18 19 20 
// 21 22 23 24