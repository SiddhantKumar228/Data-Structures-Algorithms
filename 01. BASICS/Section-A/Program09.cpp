// WAP to print n numbers except numbers divisible by 3

#include <iostream>
using namespace std;

void print(int n)
{
    for (int i = 1; i <= n; i++)
    {

        // Skip the printing of numbers divisible by 3
        if (i % 3 == 0)
        {
            continue;
        }

        // Print remaining numbers
        else
        {
            cout << i << endl;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    print(n);
    return 0;
}