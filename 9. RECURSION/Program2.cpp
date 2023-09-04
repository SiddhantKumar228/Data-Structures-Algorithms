// Factorial
#include <iostream>
using namespace std;

// factorial function
int fact(int n)
{
    // Base Case
    if (n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

// Main function
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Factorial: " << fact(n);
    return 0;
}