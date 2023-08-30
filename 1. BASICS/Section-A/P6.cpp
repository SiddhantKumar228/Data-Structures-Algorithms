#include <iostream>
using namespace std;

void print(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << sum;
}

int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}