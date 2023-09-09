// Change the value using pointers

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the value: ";
    cin >> a;
    int *p = &a;

    cout << "Value of a before: " << *p << endl;
    cout << "Value of a before: " << a << endl;
    cout << endl;
    *p = *p + 1;
    cout << "Value of a after: " << *p << endl;
    cout << "Value of a after: " << a << endl;
    cout << endl;
    (*p)++;
    cout << "Value of *p++: " << *p << endl;
    cout << "Value of a: " << a << endl;
    cout << endl;

    return 0;
}