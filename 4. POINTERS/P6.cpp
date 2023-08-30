#include <iostream>
using namespace std;

void reverse(int *arr, int n)
{
    int *ptr1 = arr;         // First element
    int *ptr2 = arr + n - 1; // Last element
    while (ptr1 < ptr2)
    {
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
    cin >> n;
    int *arr = new int(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverse(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}