// Find total number of occurence of an element in array

#include <iostream>
using namespace std;

// Find occurence
int count(int *arr, int n, int s)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == s)
        {
            c++;
        }
    }
    return c;
}

// Main function
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements in array in sorted order: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int s;
    cout << "Enter the element to be searched: ";
    cin >> s;

    cout << "Total number of occurence of " << s << ": " << count(arr, n, s);
    return 0;
}