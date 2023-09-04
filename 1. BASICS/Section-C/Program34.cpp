/*

Pattern: Rectangle (Alphabet)

A B C
B C D
C D E

*/

#include <iostream>
using namespace std;

// Pattern function
void pattern(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        char ch1 = ch;
        for (int j = 0; j < n; j++)
        {
            cout << ch1 << " ";
            ch1++;
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