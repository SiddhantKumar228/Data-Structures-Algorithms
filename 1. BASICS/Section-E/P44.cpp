#include <iostream>
#include <math.h>
using namespace std;

int power(int a, int b)
{
    return pow(a, b);
}

int power2(int a, int b)
{
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << power(a, b) << endl;
    cout << power2(a, b) << endl;
    return 0;
}