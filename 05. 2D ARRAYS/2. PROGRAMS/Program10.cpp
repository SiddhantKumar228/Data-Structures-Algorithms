// Print Wave of Matrix Elements

#include <iostream>
using namespace std;

void wave(int **arr, int row, int col)
{
    int row_start = 0, col_start = 0, row_end = row - 1, col_end = col - 1;

    // Wave Traversal
    cout << "Wave of Matrix element: " << endl;
    while (col_start <= col_end)
    {

        // Even Column will print downward
        if (col_start % 2 == 0)
        {
            for (int i = row_start; i <= row_end; i++)
            {
                cout << arr[i][col_start] << " ";
            }
        }

        // Odd Column will print upward
        else
        {
            for (int i = row_end; i >= row_start; i--)
            {
                cout << arr[i][col_start] << " ";
            }
        }
        row_start = 0;
        row_end = row - 1;
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

    // Calling Wave function
    wave(arr, row, col);
    return 0;
}