// Find first and last position of an element in sorted array
#include <iostream>
using namespace std;

// Searching Position
void search_pos(int *arr, int n, int s)
{
    int min_pos = INT_MAX;
    int max_pos = INT_MIN;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == s)
        {
            flag = 1;
            min_pos = min(min_pos, i); // First Position
            max_pos = max(max_pos, i); // Last Position
        }

        // If element is greater - break
        if (arr[i] > s)
        {
            break;
        }
    }
    if (flag == 1)
    {
        cout << "First Position of " << s << ": " << min_pos << endl;
        cout << "Last Position of " << s << ": " << max_pos << endl;
    }

    else
    {
        cout << "Element is not present" << endl;
    }
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

    search_pos(arr, n, s);
    return 0;
}