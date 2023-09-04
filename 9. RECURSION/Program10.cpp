// Selection Sort using Recursion

#include <iostream>
using namespace std;

// Selection Sort
void selectionSort(int *arr, int begin, int size)
{
    // Base case
    if (begin >= size - 1)
    {
        return;
    }

    // Traversing through array
    int min = begin;
    for (int i = begin; i < size; i++)
    {
        if (arr[min] > arr[i])
        {
            min = i;
        }
    }
    // Swapping minimum element with first element
    int temp = arr[min];
    arr[min] = arr[begin];
    arr[begin] = temp;

    // Recurrence Relation
    selectionSort(arr, begin + 1, size);
}

int main()
{
    int n;
    cout << "Enter the n: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter elements in array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr, 0, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}