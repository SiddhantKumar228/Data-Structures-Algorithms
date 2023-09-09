// Sum of Two Arrays

#include <iostream>
using namespace std;

// Adding two arrays

void adding(int *a1, int a, int *a2, int b)
{
    // Larger size
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

    int carry = 0;
    int i = a - 1;
    int j = b - 1;
    int k = c - 1;

    // Performing Sum
    while (k >= 0)
    {
        int sum = carry;

        if (i >= 0)
        {
            sum += a1[i];
        }

        if (j >= 0)
        {
            sum += a2[j];
        }

        int q = sum / 10;
        int r = sum % 10;

        a3[k] = r;
        carry = q;

        i--;
        j--;
        k--;
    }

    if (carry != 0)
    {
        cout << carry << " ";
    }

    for (int x = 0; x < c; x++)
    {
        cout << a3[x] << " ";
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

    // Calling adding function
    adding(arr1, a1, arr2, a2);
    return 0;
}