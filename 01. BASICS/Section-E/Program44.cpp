// Power (a,b) using function

#include <iostream>
using namespace std;

// Power function
int power(int a, int b)
{
    int pow = 1;
    for (int i = 0; i < b; i++)
    {
        pow = pow * a;
    }
    return pow;
}

// Main function
int main()
{
    int a, b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;
    cout << power(a, b);
    return 0;
}