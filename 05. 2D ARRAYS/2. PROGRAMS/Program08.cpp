// Rotate Matrix by rotating 90 degrees anti-clockwise

#include <iostream>
using namespace std;

void rotate(int **arr, int n)
{
    int temp[n][n];
    int temp_row = n - 1, temp_col = 0;

    // Performing 90 degree Rotation
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp[temp_row][temp_col] = arr[i][j];
            temp_row--;
        }
        temp_row = n - 1;
        temp_col++;
    }

    // Printing Roated Matrix
    cout << "\nRoated Matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << temp[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the n for N*N Matrix: ";
    cin >> n;

    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    cout << "Enter the elements in array: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "\nOriginal Matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // Calling rotate function
    rotate(arr, n);
    return 0;
}