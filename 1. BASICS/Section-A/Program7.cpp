// WAP using while loop to read input and print output until the number n is greater than -ve number

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    // While loop will run until number is -ve
    while (n >= 0)
    {
        cout << n << endl;
        cout << "Enter the number: ";
        cin >> n;
    }
    return 0;
}