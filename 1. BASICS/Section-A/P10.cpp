#include <iostream>
#include <math.h>
using namespace std;

void print(int n)
{
    int flag = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 1;
        }
    }
    if (flag)
    {
        cout << "Non-Prime";
    }
    else
    {
        cout << "Prime";
    }
}

int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}