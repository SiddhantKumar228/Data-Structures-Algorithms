// Double Pointers

#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *p = &a;
    int **q = &p;

    // Access value of a
    cout << "Value of a: " << a << endl;
    cout << "Value of a: " << *p << endl;
    cout << "Value of a: " << **q << endl;

    // Address of a
    cout << "Address of a: " << &a << endl;
    cout << "Address of a: " << p << endl;
    cout << "Address of a: " << *q << endl;

    // Change value using double pointer
    (**q)++;
    cout << "Changed value of a: " << a << endl;
    cout << "Changed value of a: " << *p << endl;
    cout << "Changed value of a: " << **q << endl;

    return 0;
}