// The do-while loop executes the loop body at least once, regardless of the condition.The condition is checked after the loop body is executed.

#include <iostream>
                                                          using namespace std;

int main()
{
    int i = 0;

    // do-while loop from 0 to 4
    do
    {
        cout << "i = " << i << endl;
        i++;
    } while (i < 5);

    return 0;
}

// output
// i = 0
// i = 1
// i = 2
// i = 3
// i = 4