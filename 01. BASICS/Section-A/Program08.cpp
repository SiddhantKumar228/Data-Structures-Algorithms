// WAP using do - while loop to read input and print output until the number n is greater than -ve number

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    // Do while loop will run atleast once then run until number is -ve
    do
    {
        cout << n << endl;
        cout << "Enter the number: ";
        cin >> n;
    } while (n >= 0);
    return 0;
}