// Reverse a String using recursion
#include <iostream>
#include <string>
using namespace std;

// Reverse function
void reverseStr(string &str, int s, int e)
{
    // Base case
    if (s >= e)
    {
        return;
    }

    // Swapping starting and ending element
    char temp = str[s];
    str[s] = str[e];
    str[e] = temp;

    // Recursive call
    reverseStr(str, s + 1, e - 1);
}

// Main function
int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;

    // Calling reverse function
    reverseStr(str, 0, str.size() - 1);

    cout << "Reversed string: " << str;
    return 0;
}