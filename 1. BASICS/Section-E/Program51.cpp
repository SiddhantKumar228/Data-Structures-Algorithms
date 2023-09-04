// Sum of first n numbers using function
#include <iostream>
using namespace std;

// Sum function
int sum_n(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

// Main function
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Sum of n: " << sum_n(n);
    return 0;
}