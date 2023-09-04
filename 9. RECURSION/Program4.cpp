// Fibonacci Series
#include <iostream>
using namespace std;

// Fibonacci series
void fibo(int n, int a, int b)
{
    // Base Case
    if (n == 2)
    {
        return;
    }

    // Processing
    int sum = a + b;
    cout << sum << endl;

    // Recurrence Relation
    fibo(n - 1, b, sum);
}

// Main function
int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    int a = 0, b = 1;
    cout << "Fibonacci Series: " << endl;
    cout << a << endl;
    cout << b << endl;
    fibo(n, a, b);
    return 0;
}