// Input & Output in Character array
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of character array: ";
    cin >> n;

    char arr[n];

    cout << "Enter the elements in array: " << endl;
    cin >> arr;

    cout << "Character Array: " << endl;
    cout << arr;
    return 0;
}