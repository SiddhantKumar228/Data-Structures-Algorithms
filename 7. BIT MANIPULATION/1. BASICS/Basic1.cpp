// Get BIT/ is Bit set?

#include <iostream>
using namespace std;

// Get Bit function
bool getBit(int n, int i)
{
    int mask = 1 << i;
    return (n & mask);
}

int main()
{
    int n, i;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the position: ";
    cin >> i;

    // Calling Get Bit function:
    bool isSet = getBit(n, i);

    // If Bit is 1:
    if (isSet)
    {
        cout << "Bit is Set" << endl;
    }

    // If Bit is 0:
    else
    {
        cout << "Bit is Not Set" << endl;
    }
    return 0;
}