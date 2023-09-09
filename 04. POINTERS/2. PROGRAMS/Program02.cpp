// Pointer Arithmetic operations

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int *ptr1 = &a;
    int *ptr2 = &b;

    cout << "Sum: " << *ptr1 + *ptr2 << endl;
    cout << "Difference: " << *ptr1 - *ptr2 << endl;
    return 0;
}