// Diamond Inheritance

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

// First Side
class Child1 : public Parent
{
public:
    Child1()
    {
        cout << "Child 1" << endl;
    }
};

class Child2 : public Child1
{
public:
    Child2()
    {
        cout << "Child 2" << endl;
    }
};

// Second Side
class Child3 : public Parent
{
public:
    Child3()
    {
        cout << "Child 3" << endl;
    }
};

class Child4 : public Child3
{
public:
    Child4()
    {
        cout << "Child 4" << endl;
    }
};

class GrandChild : public Child2, public Child4
{
public:
    GrandChild()
    {
        cout << "Grand Child" << endl;
    }
};

int main()
{
    GrandChild ob;
    return 0;
}