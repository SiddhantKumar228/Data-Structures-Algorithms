// Multi-level Inheritance

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

class Grandchild : public Child
{
public:
    Grandchild()
    {
        cout << "Grand Child" << endl;
    }
};

int main()
{
    Grandchild ob;
    return 0;
}