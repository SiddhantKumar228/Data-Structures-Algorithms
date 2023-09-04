/*

Pattern: Half Pyramid

*
* *
* * *
* * * *

1
2 2
3 3 3
4 4 4 4

*/

#include <iostream>
using namespace std;

// Printing pattern
void pattern(int row)
{

    // Star Pattern:
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
    // Number Pattern:
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main()
{
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;

    // Calling pattern function
    pattern(row);
    return 0;
}