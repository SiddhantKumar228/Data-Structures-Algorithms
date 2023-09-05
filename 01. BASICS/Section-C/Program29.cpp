/*

Pattern: Rectangle (Number)

1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4

*/

#include <iostream>
using namespace std;

// Pattern function
void pattern(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << j << " ";
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