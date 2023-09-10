// Given n, print XOR of all numbers from 1 - O(1)

#include <iostream>
using namespace std;

// XOR function
int Total_XOR(int n)
{
    int ans;
    if (n % 4 == 0)
    {
        ans = n;
    }
    else if (n % 4 == 1)
    {
        ans = 1;
    }
    else if (n % 4 == 2)
    {
        ans = (n + 1);
    }
    else
    {
        ans = 0;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "XOR of all numbers: ";
    cout << Total_XOR(n);

    return 0;
}