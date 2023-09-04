#include <iostream>
using namespace std;

class Parent1
{
public:
    Parent1()
    {
        cout << "Parent1" << endl;
    }
};

class Child1 : public Parent1
{
public:
    Child1()
    {
        cout << "Child1" << endl;
    }
};

class Child2 : public Parent1
{
public:
    Child2()
    {
        cout << "Child2" << endl;
    }
};

int main()
{
    Child1 ob1;
    Child2 ob2;
    return 0;
}