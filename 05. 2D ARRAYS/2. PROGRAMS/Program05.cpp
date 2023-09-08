// Matrix Multiplication

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the three values: ";
    cin >> a >> b >> c;

    // First Array
    int **arr1 = new int *[a];
    for (int i = 0; i < a; i++)
    {
        arr1[i] = new int[b];
    }

    cout << "Enter the elements in first array: " << endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> arr1[i][j];
        }
    }

    // Second Array
    int **arr2 = new int *[b];
    for (int i = 0; i < b; i++)
    {
        arr2[i] = new int[c];
    }

    cout << "Enter the elements in second array: " << endl;
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr2[i][j];
        }
    }

    // Creating a new Matrix
    int **mul = new int *[a];
    for (int i = 0; i < a; i++)
    {
        mul[i] = new int[c];
    }

    // Performing Multiplication
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < c; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < b; k++)
            {
                mul[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Multiplied Matrix
    cout << "\nMultiplied Matrxi: " << endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}