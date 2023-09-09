/*

Pattern: Zig Zag

    *       *
  *   *   *   *
*       *       *

*/

#include <iostream>
using namespace std;

// Printing pattern
void pattern(int n)
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0))
            {
                cout << "*  ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int col;
    cout << "Enter the number of columns (Type 9 for given pattern): ";
    cin >> col;

    // Calling pattern function
    pattern(col);
    return 0;
}