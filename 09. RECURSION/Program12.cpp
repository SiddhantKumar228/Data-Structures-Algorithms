// Insertion Sort using Recursion

#include <iostream>
using namespace std;

// Looping function (Inner Loop)
void looping(int *arr, int j, int current)
{
    // Base case
    if (j < 0 || current > arr[j])
    {
        return;
    }

    // Performing Swapping
    if (arr[j] > arr[j + 1])
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = current;

    // Recursive Call
    looping(arr, j, current);
}

// Insertion Sort function (Outer Loop)
void insertionSort(int *arr, int s, int e)
{
    // Base case
    if (s > e)
    {
        return;
    }

    // Calling Looping function
    int current = arr[s];
    int j = s - 1;
    looping(arr, j, current);

    // Recursive Call
    insertionSort(arr, s + 1, e);
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

    // Calling Insertion Sort function
    insertionSort(arr, 1, n - 1);

    cout << "\nArray after insertion sort:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}