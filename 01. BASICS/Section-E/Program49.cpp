// Factorial using function
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

// Main function
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Factorial: " << fact(n);
    return 0;
}