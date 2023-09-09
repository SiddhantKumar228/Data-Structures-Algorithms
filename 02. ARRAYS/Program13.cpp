// Find Duplicates in an array of size n where elements lies between 1 to n-1

#include <iostream>
using namespace std;

// Finding Duplicate elements
int dupli(int *arr, int n)
{
    int XOR = 0;
    for (int i = 0; i < n; i++)
    {
        // XOR of same elements results in 0
        XOR = XOR ^ arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        XOR = XOR ^ i; // elements lies between 1 to n-1
    }
    return XOR;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements in array: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Duplicate element: " << dupli(arr, n);
    return 0;
}