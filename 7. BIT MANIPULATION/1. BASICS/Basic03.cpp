// Clear BIT/ Remove BIT

#include <iostream>
using namespace std;

// Clear Bit function
int clearBit(int n, int i)
{
    int mask = 1 << i;
    return (n & (~mask));
}

int main()
{
    int n, i;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the position: ";
    cin >> i;

    // Calling clear bit function
    cout << "After clearing the bit: " << clearBit(n, i);
    return 0;
}