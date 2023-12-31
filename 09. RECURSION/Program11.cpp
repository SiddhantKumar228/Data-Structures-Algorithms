// Bubble Sort using Recursion

#include <iostream>
using namespace std;

// Looping function (Inner Loop)
void looping(int *arr, int s, int e)
{
    // Base case
    if (s > e)
    {
        return;
    }

    // Performing Swap
    if (arr[s] > arr[s + 1])
    {
        int temp = arr[s];
        arr[s] = arr[s + 1];
        arr[s + 1] = temp;
    }

    // Recursive Call
    looping(arr, s + 1, e);
}

// Bubble Sort function (Outer Loop)
void bubbleSort(int *arr, int e)
{
    // Base case
    if (e == 0)
    {
        return;
    }

    // Calling Looping function
    looping(arr, 0, e - 1);

    // Recursive Call
    bubbleSort(arr, e - 1);
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

    // Calling Bubble Sort function
    bubbleSort(arr, n - 1);

    cout << "\nArray after bubble sort:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}