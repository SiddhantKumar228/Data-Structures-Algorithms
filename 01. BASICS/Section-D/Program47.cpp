// WAP to print nCr of n and r

#include <iostream>
using namespace std;

// Factorial function
int fact(int n)
{
    int f = 1;
    for (int i = 2; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

// nCr function
int nCr(int n, int r)
{
    int nr = fact(n) / ((fact(n - r)) * fact(r));
    return nr;
}

// Main function
int main()
{
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;
    cout << "nCr: " << nCr(n, r);
    return 0;
}