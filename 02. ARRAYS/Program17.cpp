// Rotate an array by n

#include <iostream>
using namespace std;

// Rotate function
void rotate(int *arr1, int n, int r)
{

    // If rotation results same array
    if (n % r == 0)
    {
        cout << "Array is same after rotation: " << endl;
    }

    // Perform rotation
    else
    {
        // Perform n times
        while (r > 0)
        {
            // Perform one rotation
            int last = arr1[n - 1];
            for (int i = n - 2; i >= 0; i--)
            {
                arr1[i + 1] = arr1[i];
            }
            arr1[0] = last;
            r--;
        }
    }

    // Print array after rotation
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *arr1 = new int[n];
    cout << "Enter the elements in array: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int r;
    cout << "Enter the number of rotations: ";
    cin >> r;

    rotate(arr1, n, r);
    return 0;
}