/*

Pattern: Floydd Triangle

1
2 3
4 5 6
7 8 9 10

*/

#include <iostream>
using namespace std;

// Printing pattern
void pattern(int row)
{
    int c = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << c << " ";
            c++;
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