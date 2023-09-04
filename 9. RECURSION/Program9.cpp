// Binary Search
#include <iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int key)
{
    // Base Case
    if (s > e)
    {
        return false;
    }

    // Check middle element
    int mid = (s + e) / 2;
    if (arr[mid] == key)
    {
        return true;
    }

    // If key element is more than middle element
    else if (arr[mid] > key)
    {
        return binarySearch(arr, s, mid - 1, key);
    }

    // If key element is less than middle element
    else
    {
        return binarySearch(arr, mid + 1, e, key);
    }
}

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements in array in sorted order: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter element to be searched: ";
    cin >> key;
    cout << binarySearch(arr, 0, n - 1, key);
    return 0;
}