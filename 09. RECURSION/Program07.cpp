// Is Array Sorted

#include <iostream>
using namespace std;

// isSorted function
bool isSorted(int *arr, int s, int e)
{
    // Base case
    if (s == e)
    {
        return true;
    }

    // Check each element with next element
    if (arr[s] < arr[s + 1])
    {
        return isSorted(arr, s + 1, e);
    }

    return false;
}

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

    // Checking if array is sorted
    if (isSorted(arr, 0, n - 1))
    {
        cout << "Array is sorted";
    }
    else
    {
        cout << "Array is not sorted";
    }

    return 0;
}