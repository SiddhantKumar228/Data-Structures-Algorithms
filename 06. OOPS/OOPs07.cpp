// Single Inheritance

#include <iostream>
using namespace std;

class Parent
{
public:
    Parent()
    {
        cout << "Parent" << endl;
    }
};

class Child : public Parent
{
public:
    Child()
    {
        cout << "Child" << endl;
    }
};

int main()
{
    Child ob;
    return 0;
}