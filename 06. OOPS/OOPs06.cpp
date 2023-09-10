// Access Modifiers

#include <iostream>
using namespace std;

class Parent
{
public:
    int x = 4;

protected:
    int y = 7;

private:
    int z = 10;
};

class Child1 : public Parent
{
    int x; // x is public
    int y; // y is protected
    int z; // z is inaccessible
};

class Child2 : protected Parent
{
    int x; // x is protected
    int y; // y is protected
    int z; // z is inaccessible
};

class Child2 : private Parent
{
    int x; // x is public
    int y; // y is public
    int z; // z is inaccessible
};
