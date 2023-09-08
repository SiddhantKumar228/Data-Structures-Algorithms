// Implement BITWISE Operators

#include <iostream>
using namespace std;

// AND
int andBIT(int a, int b)
{
    return (a & b);
}

// OR
int orBIT(int a, int b)
{
    return (a | b);
}

// NOT
int notBIT(int n)
{
    return (~n);
}

// XOR
int xorBIT(int a, int b)
{
    return (a ^ b);
}

int main()
{
    int a, b;
    cout << "Enter the value of A and B: ";
    cin >> a >> b;
    cout << "A & B: " << andBIT(a, b) << endl;
    cout << "A | B: " << orBIT(a, b) << endl;
    cout << "~A: " << notBIT(a) << endl;
    cout << "~B: " << notBIT(b) << endl;
    cout << "A ^ B: " << xorBIT(a, b) << endl;
    return 0;
}