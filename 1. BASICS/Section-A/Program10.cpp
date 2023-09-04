// Print all prime numbers till n

#include <iostream>
#include <math.h>
using namespace std;

// Prime function
void prime(int n)
{
    // Loop to iterate n numbers
    for (int a = 1; a <= n; a++)
    {
        int flag = 0;

        // Loop to check if the number is divisible by itself
        for (int i = 2; i <= sqrt(a); i++)
        {
            if (a % i == 0)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            cout << a << endl;
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
    int n;
    cout << "Enter the number: ";
    cin >> n;
    prime(n);
    return 0;
}