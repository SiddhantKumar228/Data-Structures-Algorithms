// Armstrong number using function

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

// Armstrong number
bool armstrong(int n)
{
    int num = n;
    int b = 0;
    while (num > 0)
    {
        b++;
        num = num / 10;
    }
    num = n;
    int sum = 0;
    while (num > 0)
    {
        int a = num % 10;
        sum = sum + power(a, b);
        num = num / 10;
    }
    if (sum == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Main function
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    bool isarm = armstrong(n);
    if (isarm)
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "Not Armstrong";
    }
    return 0;
}