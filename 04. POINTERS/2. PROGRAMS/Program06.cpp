// Reverse an array using pointer

#include <iostream>
using namespace std;

// Reverse function
void reverse(int *arr, int n)
{
    int *ptr1 = arr;         // First element
    int *ptr2 = arr + n - 1; // Last element

    while (ptr1 < ptr2)
    {
        // Swapping left & right element
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;

        ptr1++;
        ptr2--;
    }
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverse(arr, n);
    cout << "Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}