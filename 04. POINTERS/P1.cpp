#include <iostream>
using namespace std;

int update(int *p)
{
    *p = *p + 1;
    return *p;
}

int main()
{
    int a = 6;
    int *p = &a;
    cout << a << endl;
    cout << p << endl;
    update(p);
    cout << a << endl;
    cout << p << endl;
    return 0;
}
