// Every integer occurs twice, two intergers occur once

#include <iostream>
#include <map>
using namespace std;

void two_ele(int *arr, int n)
{
}

int main()
{
    int n;
    cout << "Enter the even size of array: ";
    cin >> n;
    if (n % 2 == 0)
    {
        int *arr = new int[n];
        cout << "Enter the elements in array: \n";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        two_ele(arr, n);
    }
    else
    {
        cout << "Array size is odd ";
    }
    return 0;
}