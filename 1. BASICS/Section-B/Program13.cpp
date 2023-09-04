/*

Pattern: Rectangle

* * * * *
* * * * *
* * * * *
* * * * *

*/

#include <iostream>
using namespace std;

// Printing pattern
void rect(int row, int col)
{
    for (int i = 0; i < row; i++)
    {
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

    cout << "Enter number of rows and columns: ";
    cin >> row >> col;

    // Calling pattern function
    rect(row, col);
    return 0;
}