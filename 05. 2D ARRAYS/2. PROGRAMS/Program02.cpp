// Linear Search in Matrix

#include <iostream>
using namespace std;

bool linearSearch(int **arr, int row, int col, int key)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (key == *(arr[i] + j))
            {
                return true;
            }
        }
    }
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

    if (linearSearch(arr, row, col, key))
    {
        cout << "Element is present in array" << endl;
    }
    else
    {
        cout << "Element is not present in array" << endl;
    }
    return 0;
}