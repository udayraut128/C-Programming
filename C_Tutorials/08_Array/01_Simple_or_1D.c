#include <stdio.h>

int main()
{
    int numbers[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}

// output
// numbers[0] = 1
// numbers[1] = 2
// numbers[2] = 3
// numbers[3] = 4
// numbers[4] = 5

#include <stdio.h>

int main()
{
    int numbers[5] = {1, 2}; // Remaining elements are initialized to 0

    for (int i = 0; i < 5; i++)
    {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}

// output
// numbers[0] = 1
// numbers[1] = 2
// numbers[2] = 0
// numbers[3] = 0
// numbers[4] = 0
