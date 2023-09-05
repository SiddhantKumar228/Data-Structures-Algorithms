// Linear Search
#include <iostream>
using namespace std;

bool linearSearch(int *arr, int s, int e, int key)
{
    // Base Case
    if (s > e)
    {
        return false;
    }

    // Check if key is array element
    if (arr[s] == key)
    {
        return true;
    }
    else
    {
        return linearSearch(arr, s + 1, e, key);
    }
}

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements in array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter element to be searched: ";
    cin >> key;
    cout << linearSearch(arr, 0, n - 1, key);
    return 0;
}