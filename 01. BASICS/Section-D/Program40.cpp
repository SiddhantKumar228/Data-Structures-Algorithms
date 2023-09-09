// Reverse Integer Range [-2^31 , 2^31 - 1]

#include <iostream>
using namespace std;

int reverse(int n)
{

    int num = n;
    int ans = 0;
    while (n != 0)
    {

        int digit = n % 10;
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
        {
            return 0;
        }
        ans = (ans * 10) + digit;
        n = n / 10;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Reverse Number:" << reverse(n);
    return 0;
}