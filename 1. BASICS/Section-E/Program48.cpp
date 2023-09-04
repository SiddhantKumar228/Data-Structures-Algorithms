// Fibonacci Series using function

#include <iostream>
using namespace std;

void fibo(int n)
{
    int a = 0;
    int b = 1;
    cout << a << endl;
    cout << b << endl;
    int sum = 0;
    for (int i = 1; i < n - 1; i++)
    {
        sum = a + b;
        cout << sum << endl;
        a = b;
        b = sum;
    }
}

int main()
{
    int n;
    cout << "Enter the term: ";
    cin >> n;
    cout << "Fibonacci Series: " << endl;
    fibo(n);
    return 0;
}