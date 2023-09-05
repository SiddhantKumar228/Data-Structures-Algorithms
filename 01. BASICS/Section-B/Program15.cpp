/*

Pattern: Inverted Half Pyramid

* * * *
* * *
* *
*

*/

#include <iostream>
using namespace std;

// Printing pattern
void pattern(int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row - i; j++)
        {
            cout << "* ";
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