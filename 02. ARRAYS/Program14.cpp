// Merge two arrays

#include <iostream>
using namespace std;

// Merge arrays
void merge(int *a1, int a, int *b1, int b)
{
    // Creating third array
    int c = a + b;
    int *a3 = new int[c];

    // Copy elements of first array
    for (int i = 0; i < a; i++)
    {
        a3[i] = a1[i];
    }

    // Copy elements of second array
    for (int i = 0; i < b; i++)
    {
        a3[a + i] = b1[i];
    }

    // Print Merged Array
    for (int i = 0; i < c; i++)
    {
        cout << a3[i] << " ";
    }
}

int main()
{
    int a1;
    cout << "Enter the size of the array 1: ";
    cin >> a1;
    int *arr1 = new int[a1];
    cout << "Enter the elements in array 1: " << endl;

    for (int i = 0; i < a1; i++)
    {
        cin >> arr1[i];
    }

    int a2;
    cout << "Enter the size of the array 2: ";
    cin >> a2;
    int *arr2 = new int[a2];
    cout << "Enter the elements in array 2: " << endl;

    for (int i = 0; i < a2; i++)
    {
        cin >> arr2[i];
    }

    merge(arr1, a1, arr2, a2);
    return 0;
}