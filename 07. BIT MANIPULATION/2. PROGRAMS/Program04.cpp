// Print XOR of all numbers from L - R

#include <iostream>
using namespace std;

// XOR function
int XOR(int n)
{
    int ans;
    if (n % 4 == 0)
    {
        ans = n;
    }
    else if (n % 4 == 1)
    {
        ans = 1;
    }
    else if (n % 4 == 2)
    {
        ans = (n + 1);
    }
    else
    {
        ans = 0;
    }
    return ans;
}

int main()
{
    int l;
    cout << "Enter the L: ";
    cin >> l;

    int r;
    cout << "Enter the R: ";
    cin >> r;

    int XOR_L = XOR(l - 1);
    int XOR_R = XOR(r);

    cout << "XOR of all numbers from L - R: ";
    int ans = XOR_L ^ XOR_R;
    cout << ans;
    return 0;
}