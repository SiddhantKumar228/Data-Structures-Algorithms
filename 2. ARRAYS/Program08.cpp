// Sum of all Subarrays

#include <iostream>
using namespace std;

// Sum of all Subarrays
void subarray(int *arr, int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        // Print of subarray
        cout << "Subarray " << i + 1 << ": ";
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            cout << arr[j] << " ";
            sum = sum + arr[j];
        }

        // Sum of subarray i
        cout << "\nSum: " << sum << endl;
        cout << endl;
        total = total + sum;
    }

    // Total sum of subarray
    cout << "Total Sum: " << total;
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
    subarray(arr, n);
    return 0;
}