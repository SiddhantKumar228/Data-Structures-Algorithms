// Passing array using pointers

#include <iostream>
using namespace std;

void update(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << i[arr] << " ";
    }
}

int main()
{
    int arr[6] = {4, 8, 12, 45, 21, 76};

    update(arr, 6);
    return 0;
}