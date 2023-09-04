/*

Pattern: Border

* * * * *
*       *
*       *
* * * * *

*/

#include <iostream>
using namespace std;

// Printing pattern
void pattern(int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            // Print stars:
            if (i == 0 || j == 0 || i == row - 1 || j == col - 1)
            {
                cout << "* ";
            }

            // Print spaces:
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int row, col;

    cout << "Enter number of rows and columns: ";
    cin >> row >> col;

    // Calling pattern function
    pattern(row, col);
    return 0;
}