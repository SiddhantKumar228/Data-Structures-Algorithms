// Print the sum & row number that has largest sum

#include <iostream>
using namespace std;

void rowSum(int **arr, int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // Calculating
            sum = sum + arr[i][j];
        }
        cout << "Sum of row " << i << " is " << sum << endl;
        sum = 0;
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
    cout << endl;
    // Calling rowSum function
    rowSum(arr, row, col);
    return 0;
}