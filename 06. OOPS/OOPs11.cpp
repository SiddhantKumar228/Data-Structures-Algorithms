// Hybrid Inheritance

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

class Child1 : public Parent
{
public:
    Child1()
    {
        cout << "Child 1" << endl;
    }
};

class Child2 : public Parent
{
public:
    Child2()
    {
        cout << "Child 2" << endl;
    }
};

class GrandChild : public Child2
{
public:
    GrandChild()
    {
        cout << "Grand Child" << endl;
    }
};

int main()
{
    Child1 ob1;
    GrandChild ob2;
    return 0;
}