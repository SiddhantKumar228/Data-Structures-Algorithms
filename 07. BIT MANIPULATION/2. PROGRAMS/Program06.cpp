// Remove the last set bit

#include <iostream>
using namespace std;

int removeBit(int n)
{
    return (n & (n - 1));
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "After removing last bit: " << removeBit(n);
    return 0;
}