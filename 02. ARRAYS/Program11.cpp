// Swap Alternates

#include <iostream>
using namespace std;

void swapAlternates(int *arr, int n)
{
    if (n <= 1)
    {
        cout << "Array is sorted: " << endl;
        return;
    }

    // Loop will run from 0 to n-1
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n) // Check if size is odd or even
        {
            // Swap alternates
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

// Main function
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements in array: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    swapAlternates(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
