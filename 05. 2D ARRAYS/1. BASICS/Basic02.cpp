// Performing Operations in 2D Array

#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Address of First element
    cout << "Address of first element: " << &arr[0][0] << endl;
    cout << "Address of first element: " << arr[0] << endl;
    cout << endl;

    // Value of First element
    cout << "Value of first element: " << arr[0][0] << endl;
    cout << "Value of first element: " << *arr[0] << endl;
    cout << endl;

    // Change in Value of First Element
    cout << "Value of first element after adding 10: " << arr[0][0] + 10 << endl;
    cout << "Value of first element after adding 10: " << *(arr[0]) + 10 << endl;
    cout << endl;

    // Address of Next Block
    cout << "Address of next block: " << arr[0] + 1 << endl;
    cout << "Address of next block: " << &(arr[0][1]) << endl;
    cout << endl;

    // Value of Next Block
    cout << "Value of next block: " << *(arr[0] + 1) << endl;
    cout << "Value of next block: " << arr[0][1] << endl;
    cout << endl;

    return 0;
}