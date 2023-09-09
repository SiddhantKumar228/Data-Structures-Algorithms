// Union of two arrays

#include <iostream>
#include <set>
using namespace std;

// Union function
void union_of_array(int *a1, int a, int *a2, int b)
{
    set<int> unionSet;

    // Insert array 1 elements in set
    for (int i = 0; i < a; i++)
    {
        unionSet.insert(a1[i]);
    }

    // Insert array 2 elements in set
    for (int i = 0; i < b; i++)
    {
        unionSet.insert(a2[i]);
    }

    // Print Set
    cout << "Union: " << endl;
    for (auto it : unionSet)
    {
        cout << it << " ";
    }
}

int main()
{

    // Array 1
    int a1;
    cout << "Enter the size of the array 1: ";
    cin >> a1;
    int *arr1 = new int[a1];
    cout << "Enter the elements in array 1: " << endl;

    for (int i = 0; i < a1; i++)
    {
        cin >> arr1[i];
    }

    // Array 2
    int a2;
    cout << "Enter the size of the array 2: ";
    cin >> a2;
    int *arr2 = new int[a2];
    cout << "Enter the elements in array 2: " << endl;

    for (int i = 0; i < a2; i++)
    {
        cin >> arr2[i];
    }

    // Calling Union function
    union_of_array(arr1, a1, arr2, a2);

    return 0;
}