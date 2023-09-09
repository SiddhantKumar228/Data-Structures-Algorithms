// Pointers in Arrays

#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {4, 8, 12, 45, 21, 76};

    // Access the value of first element of array
    cout << "Value of first element of array: " << *arr << endl;
    cout << "Value of first element of array: " << arr[0] << endl;
    cout << endl;

    // Access the address of first element of array
    cout << "Address of first element of array: " << arr << endl;
    cout << "Address of first element of array: " << &arr[0] << endl;
    cout << endl;

    // Change the value of first element of array
    cout << "Changed value of first element of array: " << *(arr) + 1 << endl;
    cout << "Changed value of first element of array: " << arr[0] + 1 << endl;
    cout << endl;

    // Access the value of second element of array
    cout << "Value of second element of array: " << *(arr + 1) << endl;
    cout << "Value of second element of array: " << arr[1] << endl;
    cout << endl;

    // Access the address of second element of array
    cout << "Address of second element of array: " << arr + 1 << endl;
    cout << "Address of second element of array: " << &arr[1] << endl;
    cout << endl;

    return 0;
}