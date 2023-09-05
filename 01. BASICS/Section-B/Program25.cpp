/*

Pattern: Palindrome Triangle

        1
     2  1  2
  3  2  1  2  3

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
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        if (i >= 2)
        {
            for (int j = 2; j <= i; j++)
            {
                cout << j << " ";
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