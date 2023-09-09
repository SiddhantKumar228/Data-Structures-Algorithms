// Find Triplets with given sum
#include <iostream>
using namespace std;

// Sum function
void sum(int *arr, int n, int s)
{
    for (int i = 0; i < n - 2; i++)
    {
        int first = i;
        int second = i + 1;
        int third = i + 2;

        // Check the triplets
        if ((arr[first] + arr[second] + arr[third]) == s)
        {
            cout << "The elements are: " << arr[first] << " " << arr[second] << " " << arr[third] << endl;
        }
    }
}

// Main function
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n >= 3)
    {
        int *arr = new int[n];
        cout << "Enter the elements in array in sorted order: " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int s;
        cout << "Enter the sum: ";
        cin >> s;

        sum(arr, n, s);
    }
    else
    {
        cout << "Enter the array size more than 3" << endl;
    }
    return 0;
}