/*

Pattern: Inverted Half Pyramid (Numbers)

1 1 1 1
2 2 2
3 3
4

*/

#include <iostream>
using namespace std;

// Printing pattern
void pattern(int row)
{
    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j <= row - i; j++)
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