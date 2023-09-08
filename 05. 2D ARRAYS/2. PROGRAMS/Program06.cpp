// Binary Search in Matrix

#include <iostream>
using namespace std;

bool binarySearch(int **arr, int row, int col, int key)
{
    int r = 0, c = col - 1;
    while (r >= 0 && r <= row - 1 && c >= 0 && c <= col - 1)
    {

        // If found
        if (arr[r][c] == key)
        {
            return true;
        }

        else if (key < arr[r][c])
        {
            c--;
        }

        else
        {
            r++;
        }
    }

    // If not found
    return false;
}

int main()
{
    int row, col;
    cout << "Enter the number of rows, columns: ";
    cin >> row >> col;

    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    cout << "Enter the elements in array: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    int key;
    cout << "Enter the element to be searched: ";
    cin >> key;
    cout << binarySearch(arr, row, col, key);
    return 0;
}