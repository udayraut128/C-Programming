#include <stdio.h>

int main()
{
    int rows = 5;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = i; j < rows; j++)
        {
            printf("  "); // Print spaces
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("* "); // Print stars
        }
        printf("\n");
    }

    return 0;
}

// output
//       *
//     * * *
//   * * * * *
// * * * * * * *