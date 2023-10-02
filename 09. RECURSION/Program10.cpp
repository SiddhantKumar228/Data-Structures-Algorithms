// Selection Sort using Recursion

#include <iostream>
using namespace std;

// Looping function (Inner Loop)
void looping(int *arr, int i, int s, int e)
{
    // Base case
    if (s > e)
    {
        return;
    }

    // Performing Swap
    if (arr[i] > arr[s])
    {
        int temp = arr[i];
        arr[i] = arr[s];
        arr[s] = temp;
    }

    // Recursive Call
    looping(arr, i, s + 1, e);
}

// Selection Sort function (Outer loop)
void selectionSort(int *arr, int s, int e)
{
    // Base case
    if (s == e)
    {
        return;
    }

    // Calling Looping function
    looping(arr, s, s + 1, e);

    // Recursive Call
    selectionSort(arr, s + 1, e);
}

// Main function
int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Enter the elements in array:\n";
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Calling Selection Sort function
    selectionSort(arr, 0, n - 1);

    cout << "\nArray after selection sort:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}