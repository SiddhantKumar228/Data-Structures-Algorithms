// Heirarchical Inheritance

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

int main()
{
    Child1 ob1;
    Child2 ob2;
    return 0;
}