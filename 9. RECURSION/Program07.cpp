// Is Array Sorted

#include <iostream>
using namespace std;

bool issort(int *arr, int n)
{
    // Base case:
    if (n == 0 || n == 1)
    {
        return true;
    }

    // Comparing first two elements
    if (arr[0] > arr[1])
    {
        return false;
    }
    // Recurrence relation
    else
    {
        return issort(arr + 1, n - 1);
    }
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

    if (issort(arr, n))
    {
        cout << "Array is sorted";
    }
    else
    {
        cout << "Array is not sorted";
    }
    return 0;
}