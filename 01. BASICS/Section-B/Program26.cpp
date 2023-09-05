/*

Pattern: Diamond

         *
      *  *  *
   *  *  *  *  *
*  *  *  *  *  *  *
   *  *  *  *  *
      *  *  *
         *

*/

#include <iostream>
using namespace std;

// Printing pattern
void pattern(int n)
{
    // Upper part of pattern
    for (int i = n - 1; i >= 0; i--)
    {

        // Left part of pattern
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }

        // Middle part of pattern
        for (int j = 0; j <= 2 * (n - i - 1); j++)
        {
            cout << "* ";
        }

        // Right part of pattern
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        cout << endl;
    }

    // Lower part of pattern
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            // Left part of pattern
            for (int j = 0; j < i; j++)
            {
                cout << "  ";
            }

            // Middle part of pattern
            {
                for (int j = 0; j <= 2 * (n - i - 1); j++)
                {
                    cout << "* ";
                }
            }

            // Right part of pattern
            for (int j = 0; j < i; j++)
            {
                cout << "  ";
            }
            cout << endl;
        }
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