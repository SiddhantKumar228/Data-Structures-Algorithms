// Print the sum & row number that has largest sum

#include <iostream>
using namespace std;

void largestSum(int **arr, int row, int col)
{
    int sum = 0;
    int max_row = 0;
    int max_sum = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // Calculating
            sum = sum + arr[i][j];
        }

        // Checking largest sum
        if (sum >= max_sum)
        {
            // Storing largest sum in max_sum
            max_sum = sum;
            max_row = i;
        }
        sum = 0;
    }
    cout << "\nLargest Sum: " << max_sum << " of row: " << max_row << endl;
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

    // Calling largest sum function
    largestSum(arr, row, col);
    return 0;
}