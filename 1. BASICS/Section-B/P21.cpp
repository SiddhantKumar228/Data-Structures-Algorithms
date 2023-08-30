#include <iostream>
using namespace std;

void print(int n)
{
    int c = 1;
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << c << " ";
            c++;
        }
        c = 1;
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}