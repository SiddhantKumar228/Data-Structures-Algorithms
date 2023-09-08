// Transpose Matrix

#include <iostream>
using namespace std;

void transpose(int **arr, int row, int col)
{
    int temp[col][row];
    int temp_row = 0, temp_col = 0;

    // Storing elements of main array in temporary array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            temp[temp_row][temp_col] = arr[i][j];
            temp_row++;
        }
        temp_col++;
        temp_row = 0;
    }

    cout << "\nTranspose Matrix: " << endl;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << temp[i][j] << " ";
        }
        cout << endl;
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

    // Calling Transpose function
    transpose(arr, row, col);
    return 0;
}