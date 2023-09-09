// Factorial using pointers

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    int *ptr = &n;
    int fact = 1;

    while (*ptr > 0)
    {
        fact = fact * (*ptr);
        (*ptr)--;
    }

    cout << "Factorial: " << fact;
    return 0;
}