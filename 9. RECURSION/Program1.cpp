// Power of a,b
#include <iostream>
using namespace std;

// Power of a and b
int power(int a, int b)
{
    // Base case
    if (b == 0)
    {
        return 1;
    }
    return a * power(a, b - 1);
}

// Main function
int main()
{
    int a, b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;
    cout << power(a, b);
    return 0;
}