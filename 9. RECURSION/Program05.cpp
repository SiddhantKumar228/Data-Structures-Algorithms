// Climb Stairs
/*

Given a number of stairs.
You have to reach from 0 to nth stair.
But you can either climb 1 or 2 stairs.
Find number of ways in which you can climb n stairs.

*/

#include <iostream>
using namespace std;

// Climb Stairs function
int climb(int n)
{
    // Base Case:
    if (n < 0) // if stairs reaches below 0th floor
    {
        return 0;
    }

    if (n == 0) // if the floor is 0th
    {
        return 1; // no of ways to go to 0th floor from 0th floor
    }

    // Recurrence Relation
    int ans = climb(n - 1) + climb(n - 2); // climb only 1 or 2 stairs
    return ans;
}

int main()
{
    int n;
    cout << "Enter the nth stair: ";
    cin >> n;
    cout << "Number of ways to reach: " << climb(n);
    return 0;
}