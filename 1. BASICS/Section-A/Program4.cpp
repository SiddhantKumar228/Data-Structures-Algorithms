// Maximum of three numbers a,b,c

#include <iostream>
using namespace std;

void max(int a, int b, int c)
{
    // a is maximum:
    if (a > b && a > c)
    {
        cout << a << endl;
    }

    // b is maximum
    else if (b > c && b > a)
    {
        cout << b << endl;
    }

    // c is maximum
    else if (c > a && c > b)
    {
        cout << c << endl;
    }

    // two or more number is same
    else
    {
        cout << a << endl;
    }
}

int main()
{
    int a, b, c;
    cout << "Enter the value of a, b and c: ";
    cin >> a >> b >> c;

    // Calling max function:
    max(a, b, c);
    return 0;
}