// Find if the given number is Odd/ Even

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    // n is even:
    if (n % 2 == 0)
    {
        cout << "Even" << endl;
    }

    // n is odd:
    else
    {
        cout << "Odd" << endl;
    }
    return 0;
}