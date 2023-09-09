// Sort 0, 1, 2 - DNF Sort

#include <iostream>
using namespace std;

void sort_dnf(int *arr, int n)
{
    int l = 0;
    int r = n - 1;
    int m = 0;

    while (m < r)
    {
        // Moving 0 to start
        if (arr[m] == 0)
        {
            int temp = arr[l];
            arr[l] = arr[m];
            arr[m] = temp;

            l++;
            m++;
        }

        // Moving 1 to middle
        else if (arr[m] == 1)
        {
            m++;
        }

        // Moving 2 to end
        else
        {
            int temp = arr[r];
            arr[r] = arr[m];
            arr[m] = temp;

            r--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
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

    sort_dnf(arr, n);

    return 0;
}