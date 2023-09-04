// Bubble Sort in Arrays

#include <iostream>
using namespace std;

// Bubble Sort function
void bubbleSort(int *arr, int n)
{
    int count = 1;
    while (count < n)
    {
        int flag = 1;
        for (int i = 0; i < n - count; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                flag = 0;
            }
        }

        // If the array is sorted then the loop will terminate
        if (flag == 1)
        {
            break;
        }
        count++;
    }
}

// Main function
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements in array: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}