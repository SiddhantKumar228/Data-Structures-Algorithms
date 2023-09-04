// Selection Sort in Arrays

#include <iostream>
using namespace std;

// Selection Sort function
void selectionSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int flag = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                flag = 0;
            }
        }

        // If the array is sorted then the loop will terminate
        if (flag == 1)
        {
            break;
        }
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

    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}