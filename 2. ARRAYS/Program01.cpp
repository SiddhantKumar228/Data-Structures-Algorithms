// Minimum & Maximum in an array

#include <iostream>
#include <climits>
using namespace std;

// Minimum array element
int min_n(int *arr, int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

// Maximum array element
int max_n(int *arr, int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
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

    cout << "Minimum array: " << min_n(arr, n) << endl;
    cout << "Maximum array: " << max_n(arr, n) << endl;
    return 0;
}