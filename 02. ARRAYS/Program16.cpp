// Difference of Two Arrays

#include <iostream>
using namespace std;

// Difference function
void difference(int *arr1, int a, int *arr2, int b)
{
    // Largest
    int c = 0;
    if (a > b)
    {
        c = a;
    }
    else
    {
        c = b;
    }

    // Third Array
    int *a3 = new int[c];
    int i = a - 1;
    int j = b - 1;
    int k = c - 1;
    int borrow = 0;
    while (k >= 0)
    {
        int diff = (arr1[i] - borrow);
        if (j >= 0)
        {
            diff -= arr2[j];
        }

        // if difference is negative
        if (diff < 0)
        {
            diff += 10;
            borrow = 1;
        }

        // iff difference is positive
        else
        {
            borrow = 0;
        }

        a3[k] = diff;
        i--;
        j--;
        k--;
    }

    for (int i = 0; i < c; i++)
    {
        cout << a3[i] << " ";
    }
}
int main()
{

    // Array 1
    int a1;
    cout << "Enter the size of the array 1: ";
    cin >> a1;
    int *arr1 = new int[a1];
    cout << "Enter the elements in array 1: " << endl;

    for (int i = 0; i < a1; i++)
    {
        cin >> arr1[i];
    }

    // Array 2
    int a2;
    cout << "Enter the size of the array 2: ";
    cin >> a2;
    int *arr2 = new int[a2];
    cout << "Enter the elements in array 2: " << endl;

    for (int i = 0; i < a2; i++)
    {
        cin >> arr2[i];
    }

    // Calling difference function
    difference(arr1, a1, arr2, a2);
    return 0;
}