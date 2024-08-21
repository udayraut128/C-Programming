#include <stdio.h>

int main()
{
    int i = 1;

    // Printing numbers from 1 to 5 using a do-while loop
    do
    {
        printf("%d\n", i);
        i++; // Incrementing i
    } while (i <= 5);

    return 0;
}

// output
// 1
// 2
// 3
// 4
// 5