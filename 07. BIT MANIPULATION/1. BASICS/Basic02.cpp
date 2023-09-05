// Set BIT

#include <iostream>
using namespace std;

// Set Bit function
int setBit(int n, int i)
{
    int mask = 1 << i;
    return (n | mask);
}

int main()
{
    int n, i;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the position: ";
    cin >> i;

    // Calling set bit function
    cout << "After setting the bit: " << setBit(n, i);
    return 0;
}