/*

Pattern: Rectangle (Number)

1 2 3
4 5 6
7 8 9

*/

#include <iostream>
using namespace std;

// Pattern function
void pattern(int n, int m)
{
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << c << "   ";
            c++;
        }
        cout << endl;
    }
}

// Main function
int main()
{
    int n, m;
    ;
    cout << "Enter the number of rows and columns: ";
    cin >> n >> m;
    pattern(n, m);
    return 0;
}