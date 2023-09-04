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

class Parent2
{
public:
    Parent2()
    {
        cout << "Parent2" << endl;
    }
};

class Child : public Parent1, public Parent2
{
public:
    Child()
    {
        cout << "Child" << endl;
    }
};

int main()
{
    Child ob1;

    return 0;
}