#include <iostream>
using namespace std;

void update(int arr[], int n)
{
    3 [arr] = 100;
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

    cout << *arr << endl;
    update(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}