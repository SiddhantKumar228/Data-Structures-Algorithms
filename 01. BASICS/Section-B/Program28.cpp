/*

Pattern: Pascal Triangle

            1
         1     1
      1     2     1
   1     3     3     1
1     4     6     4     1

*/

#include <iostream>
using namespace std;

// Printing pattern
void pattern(int n)
{
    cout << "Pascal Triangle: " << endl;
    for (int i = 1; i <= n; i++)
    {
        int C = 1; // Initialize the first element in each row

        for (int j = 1; j <= n - i; j++)
        {
            cout << "   ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "   ";
            cout << C;
            cout << "   ";
            C = C * (i - j) / j; // Calculate the next element
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    // Calling pattern function
    pattern(n);
    return 0;
}