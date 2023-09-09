// Intersection of two arrays

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// Intersection function
void union_of_intersection(int *a1, int a, int *a2, int b)
{
    unordered_set<int> set1;
    for (int i = 0; i < a; i++)
    {
        // Insert array 1 elements in set1
        set1.insert(a1[i]);
    }

    vector<int> v; // Create a vector

    // Insert intersect elements in vector v
    for (int i = 0; i < b; i++)
    {
        // Count the number of times every element of array 2 occur in array 1
        if (set1.count(a2[i]) > 0)
        {
            v.push_back(a2[i]);
        }
    }

    // Print intersection
    cout << "Intersection: " << endl;
    for (auto it : v)
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

    // Calling Intersection function
    union_of_intersection(arr1, a1, arr2, a2);

    return 0;
}