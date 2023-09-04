#include <iostream>
using namespace std;

class Parent
{
public:
    virtual void print()
    {
        cout << "Parent class print" << endl;
    }
    void show()
    {
        cout << "Parent class void" << endl;
    }
};

class Child : public Parent
{
public:
    void print()
    {
        cout << "Child class print" << endl;
    }
    void show()
    {
        cout << "Child class show" << endl;
    }
};

int main()
{
    Parent *p;
    Child c;
    p = &c;
    p->print();
    p->show();

    return 0;
}