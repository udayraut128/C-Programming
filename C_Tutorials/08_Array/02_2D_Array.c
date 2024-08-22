#include <stdio.h>

int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
// output
// 1 2 3
// 4 5 6
// 7 8 9

#include <stdio.h>

int main()
{
    int matrix[2][2] = {
        {1, 2},
        {3, 4}};

    printf("Element at [0][0]: %d\n", matrix[0][0]);
    printf("Element at [1][1]: %d\n", matrix[1][1]);

    return 0;
}

// output
// Element at [0][0]: 1
// Element at [1][1]: 4
