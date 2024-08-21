#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break; // Exit the loop when i equals 5
        }
        printf("%d\n", i);
    }
    return 0;
}

// output
// 1
// 2
// 3
// 4