/*

Pattern: Triangle

      1
    1   2
  1   2   3
1   2   3   4

*/

#include <iostream>
using namespace std;

// Printing pattern
void pattern(int row)
{
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
            if (j < i)
            {
                cout << "   ";
            }
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