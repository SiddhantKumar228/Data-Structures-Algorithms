// Bubble Sort using Recursion
#include <iostream>
using namespace std;

// Bubble Sort
void bubbleSort(int *arr, int n)
{
    // Base case
    if (n == 0)
    {
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            // Swapping
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    // Recurrence Relation
    bubbleSort(arr, n - 1);
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

    bubbleSort(arr, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}