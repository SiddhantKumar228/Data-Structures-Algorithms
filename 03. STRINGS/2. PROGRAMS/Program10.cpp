// Palindrome String

#include <iostream>
using namespace std;

bool isPalin(string str)
{
    int l = 0;
    int r = str.size() - 1;
    while (l < r)
    {

        // If left and right characters don't match
        if (str[l] != str[r])
        {
            return false;
        }
        l++;
        r--;
    }

    // String is palindrome
    return true;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isPalin(str))
    {
        cout << "String is Palindrome" << endl;
    }
    else
    {
        cout << "String is Not Palindrome" << endl;
    }
    return 0;
}