#include <iostream>
#include <math.h>
using namespace std;

void print(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        int flag = 0;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            continue;
        }
        else
        {
            cout << i << endl;
        }
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    print(a, b);
    return 0;
}