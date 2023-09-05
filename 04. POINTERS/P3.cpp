#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int &j = a;
    j = j + 1;
    cout << a << endl;
}