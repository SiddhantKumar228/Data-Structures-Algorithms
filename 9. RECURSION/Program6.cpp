// Say Digits

#include <iostream>
using namespace std;

void sayDigits(int n)
{
    // Base Case:
    if (n == 0)
    {
        return;
    }

    // Recursion Relation
    sayDigits(n / 10);

    // Say each digit
    int digit = n % 10;
    if (digit == 0)
    {
        cout << "zero ";
    }
    else if (digit == 1)
    {
        cout << "one ";
    }
    else if (digit == 2)
    {
        cout << "two ";
    }
    else if (digit == 3)
    {
        cout << "three ";
    }
    else if (digit == 4)
    {
        cout << "four ";
    }
    else if (digit == 5)
    {
        cout << "five ";
    }
    else if (digit == 6)
    {
        cout << "six ";
    }
    else if (digit == 7)
    {
        cout << "seven ";
    }
    else if (digit == 8)
    {
        cout << "eight ";
    }
    else
    {
        cout << "nine ";
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Digits: ";
    sayDigits(n);
    return 0;
}