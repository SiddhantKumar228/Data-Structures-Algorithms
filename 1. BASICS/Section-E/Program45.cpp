// Even/Odd using function

#include <iostream>
using namespace std;

// Even/Odd function
void even_odd(int n)
{
    if (n % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
}

// Main function
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    even_odd(n);
    return 0;
}