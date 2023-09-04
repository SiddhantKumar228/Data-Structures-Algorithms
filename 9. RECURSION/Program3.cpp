// Counting numbers both order

#include <iostream>
using namespace std;

// Descending Order
void count1(int n)
{
    // Base case
    if (n == 0)
    {
        return;
    }

    cout << n << endl;
    count1(n - 1);
}

// Ascending Order
void count2(int n)
{
    // Base case
    if (n == 0)
    {
        return;
    }
    count2(n - 1);
    cout << n << endl;
}

int main()
{
    int n;
    cout << "Enter the nummber: ";
    cin >> n;
    cout << "Count in descending order: \n";
    count1(n);
    cout << endl;
    cout << "Count in ascending order: \n";
    count2(n);
    return 0;
}