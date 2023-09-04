// Swap two numbers without using third variable

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;

    a = a ^ b; // 5^7
    b = a ^ b; // 5^7 ^7 = 5
    a = a ^ b; // 5^7 ^5 = 7
    cout << "Value of a: " << a << " and b: " << b;
    return 0;
}