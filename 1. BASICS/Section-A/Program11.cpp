// Print all prime numbers between a and b

#include <iostream>
#include <math.h>
using namespace std;

// Prime function
void prime(int a, int b)
{
    // Loop to iterate from a to b numbers
    for (int j = a; j <= b; j++)
    {
        int flag = 0;

        // Loop to check if the number is divisible by itself
        for (int i = 2; i <= sqrt(j); i++)
        {
            if (j % i == 0)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            cout << j << endl;
        }
        else
        {
            continue;
        }
    }
}

// Main function
int main()
{
    int a, b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;
    prime(a, b);
    return 0;
}