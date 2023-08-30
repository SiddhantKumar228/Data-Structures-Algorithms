#include <iostream>
using namespace std;

int calculate(int a, int b, int n)
{
    switch (n)
    {
    case 1:
        return (a + b);
    case 2:
        return (a - b);
    case 3:
        return (a * b);
    case 4:
        return (a / b);
    case 5:
        return (a % b);
    default:
        return -1;
    }
}

int main()
{
    cout << "Enter a and b: " << endl;
    int a, b;
    cin >> a >> b;
    cout << "Enter\n1. Addition\n2. Substraction\n3. Multiplication\n4. Divide\n5. Remainder\n";
    int n;
    cin >> n;
    cout << calculate(a, b, n);
    return 0;
}