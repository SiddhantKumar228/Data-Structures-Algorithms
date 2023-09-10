// Check if a number is power of 2

#include <iostream>
using namespace std;

int pow2(int n)
{
    return (n & (n - 1));
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (pow2(n))
    {
        cout << "Not a power of 2" << endl;
    }
    else
    {
        cout << "Power of 2" << endl;
    }
    return 0;
}