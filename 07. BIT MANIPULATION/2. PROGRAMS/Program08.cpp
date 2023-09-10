// Count the number of set bits

#include <iostream>
using namespace std;

int setbits(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1 == 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Number of set bits: " << setbits(n);

    return 0;
}