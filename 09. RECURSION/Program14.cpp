// Check Palindrome String
#include <iostream>
#include <string>
using namespace std;

// Palindrome function
bool isPalin(string str, int s, int e)
{
    // Base case
    if (s >= e)
    {
        return true;
    }

    // Check if starting and ending elements are sam
    if (str[s] == str[e])
    {
        // Recursive call
        return isPalin(str, s + 1, e - 1);
    }
    else
    {
        return false;
    }
}

// Main function
int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;

    // Calling Palindrome function
    if (isPalin(str, 0, str.size() - 1))
    {
        cout << "The String is Palindrome";
    }
    else
    {
        cout << "The String is not Palindrome";
    }
    return 0;
}