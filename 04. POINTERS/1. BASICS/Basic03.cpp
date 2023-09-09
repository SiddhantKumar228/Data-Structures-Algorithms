// Pointers & functions

#include <iostream>
using namespace std;

// first function
void update1(int *p)
{
    p = p + 1;
}

// second function
void update2(int *p)
{
    *p = *p + 1;
}

int main()
{
    int a = 5;
    int *p = &a;

    update1(p);
    // No change because a copy is created in update1 function
    cout << "Value of a: " << a << endl;

    update2(p);
    // Changed because in update2 function value at memory is changes
    cout << "Value of a: " << a << endl;

    return 0;
}