// Sum of n numbers

#include <iostream>
using namespace std;

// Calculating sum of n
int sum_of_n(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Calling sum of n function
    cout << sum_of_n(n) << endl;
    return 0;
}