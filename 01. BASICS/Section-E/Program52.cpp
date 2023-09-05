// Pythagorian Triplet using function

#include <iostream>
using namespace std;

void triplet(int a, int b, int c)
{
    int num1, num2;
    int max_n = max(a, max(b, c));
    if (a == max_n)
    {
        num1 = b;
        num2 = c;
    }
    else if (b == max_n)
    {
        num1 = a;
        num2 = c;
    }
    else
    {
        num1 = a;
        num2 = b;
    }
    if ((max_n * max_n) == ((num1 * num1) + (num2 * num2)))
    {
        cout << "Pythagorian Triplet";
    }
    else
    {
        cout << "Not a Pythagorian Triplet";
    }
}

int main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    triplet(a, b, c);
    return 0;
}