/*

Pattern: Rhombus

      * * * * *
    * * * * *
  * * * * *
* * * * *

*/

#include <iostream>
using namespace std;

// Printing pattern
void pattern(int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row - i - 1; j++)
        {
            cout << "  ";
        }

        for (int j = 0; j < col; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int row, col;
    cout << "Enter the number of rows and columns: ";
    cin >> row >> col;

    // Calling pattern function
    pattern(row, col);
    return 0;
}