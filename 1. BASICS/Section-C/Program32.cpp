/*

Pattern: Rectangle (Alphabet)

A A A
B B B
C C C

*/

#include <iostream>
using namespace std;

// Pattern function
void pattern(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}

// Main function
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    pattern(n);
    return 0;
}