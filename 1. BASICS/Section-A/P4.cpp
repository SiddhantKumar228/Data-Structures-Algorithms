#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int max = 0;
    if (a > b && a > c)
    {
        max = a;
    }
    if (b > a && b > c)
    {
        max = b;
    }
    else
    {
        max = c;
    }
    cout << max << endl;
    return 0;
}