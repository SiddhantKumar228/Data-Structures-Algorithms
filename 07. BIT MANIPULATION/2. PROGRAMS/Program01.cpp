// WAP where every integer occurs twice, one integer is unique in an array

#include <iostream>
using namespace std;

// Finding Unique elements
int unique(int *arr, int n)
{
    int XOR = 0;
    for (int i = 0; i < n; i++)
    {
        // XOR of same elements results in 0
        XOR = XOR ^ arr[i];
    }
    return XOR;
}

int main()
{
    int n;
    cout << "Enter the odd size of array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements in array: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Unique element: " << unique(arr, n);
    return 0;
}