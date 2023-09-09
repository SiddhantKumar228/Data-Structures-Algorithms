// Kadane's Algorithm - O(n)

#include <iostream>
using namespace std;

int kadane(int *arr, int n)
{
    int sum = 0;
    int maxim = arr[0];

    for (int i = 0; i < n; i++)
    {
        // Store Sum
        sum = sum + arr[i];

        // Store maximum Sum
        maxim = max(sum, maxim);

        // If sum is less than 0
        if (sum < 0)
        {
            sum = 0;
        }
    }

    return maxim;
}

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

    // Calling Kadane's Algo
    cout << "Maximum Subarray Sum: " << kadane(arr, n);
    return 0;
}