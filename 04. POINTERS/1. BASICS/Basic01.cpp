// Declaration of pointer

#include <iostream>
using namespace std;

int main()
{
    // declaration:
    int a = 5;
    int *p = &a;

    int b = 6;
    int *q = NULL;
    q = &b;

    int c = 7;
    int *r = 0;
    r = &c;

    // change value using pointer:
    cout << "Value of a before: " << *p << endl;
    cout << "Value of a before: " << a << endl;
    *p = *p + 1;
    cout << "Value of a after: " << *p << endl;
    cout << "Value of a after: " << a << endl;
    (*p)++;
    cout << "Value of *p++: " << *p << endl;
    cout << "Value of a: " << a << endl;

    cout << endl;
    // copy pointer:
    int *copy = q;
    cout << "Value of b before: " << b << endl;
    cout << "Value of b before: " << *q << endl;
    cout << "Value of b before: " << *copy << endl;

    (*copy)++;
    cout << "Value of b after: " << b << endl;
    cout << "Value of b after: " << *q << endl;
    cout << "Value of b after: " << *copy << endl;

    return 0;
}