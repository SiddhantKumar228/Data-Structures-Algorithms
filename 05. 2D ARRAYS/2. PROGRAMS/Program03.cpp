// Print Spiral of Matrix Elements

#include <iostream>
using namespace std;

void printSpiral(int **arr, int row, int col)
{
    int row_start = 0, col_start = 0, row_end = row - 1, col_end = col - 1;
    cout << "Spiral Matrix: " << endl;
    while (row_start <= row_end && col_start <= col_end)
    {
        // Traversing First row
        for (int i = col_start; i <= col_end; i++)
        {
            cout << arr[row_start][i] << " ";
        }
        row_start++;

        // Traversing Last column
        for (int i = row_start; i <= row_end; i++)
        {
            cout << arr[i][col_end] << " ";
        }
        col_end--;

        // Traversing Last row
        for (int i = col_end; i >= col_start; i--)
        {
            cout << arr[row_end][i] << " ";
        }
        row_end--;

        // Traversing First column
        for (int i = row_end; i >= row_start; i--)
        {
            cout << arr[i][col_start] << " ";
        }
        col_start++;
    }
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

    // Calling printSpiral function
    printSpiral(arr, row, col);
    return 0;
}