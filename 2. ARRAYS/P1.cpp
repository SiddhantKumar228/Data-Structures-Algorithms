#include <iostream>
using namespace std;

int update(int arr[])
{
    arr[2] = 6;
    return arr[2];
}

int main()
{
    int arr[3] = {1, 2, 3};
    update(arr);
    cout << arr[2];
    return 0;
}