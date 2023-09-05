// WAP to make calculator using Switch Case

#include <iostream>
using namespace std;

// Calculator function
int calculator(int a, int b, char ch)
{
    switch (ch)
    {
    case '1':
        return (a + b);
    case '2':
        return (a - b);
    case '3':
        return (a * b);
    case '4':
        return (a / b);
    case '5':
        return (a % b);
    default:
        return -1;
    }
}

int main()
{
    int a, b;
    cout << "Enter the two numbers: ";
    cin >> a >> b;
    char ch;
    cout << "Enter\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulo" << endl;
    cout << "\nEnter the choice: ";
    cin >> ch;
    cout << calculator(a, b, ch);
    return 0;
}