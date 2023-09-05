/*

Pattern: Butterfly

*             *
* *         * *
* * *     * * *
* * * * * * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *

*/

#include <iostream>
using namespace std;

// Pattern function
void butterfly(int n)
{

    // Upper part of pattern
    for (int i = 0; i < n; i++)
    {

        // Left part of pattern
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        // Middle spaces of pattern
        for (int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << "  ";
        }

        // Right part of pattern
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Lower part of pattern
    for (int i = n - 1; i >= 0; i--)
    {

        // Left part of pattern
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        // Middle spaces of pattern
        for (int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << "  ";
        }

        // Right part of pattern
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// Main function
int main()
{
    int n;
    cout << "Enter the rows: ";
    cin >> n;
    butterfly(n);
    return 0;
}