// Performing Operations on Strings

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    // Strings:
    string str1 = "Siddhant";
    cout << "Given String: " << str1 << endl;
    string str2 = str1;

    // Reverse String
    reverse(str2.begin(), str2.end());
    cout << "Reverse String: " << str2 << endl;

    // Substring
    str2 = str1.substr(2, 4);
    cout << "Substring: 2, 4: " << str2 << endl;

    // Concatenate
    str2 = " Kumar";
    cout << "Concatenate: " << str1 + str2 << endl;
    cout << "Concatenate: " << str1.append(str2) << endl;

    // Size
    cout << "Size: " << str1.size() << endl;
    cout << "Size: " << str1.length() << endl;

    // Convert into string
    int i = 1456;
    string str = to_string(i);
    cout << "Integer after conversion: " << str << endl;

    // Character Array:
    char arr[10] = {'A', 'p', 'p', 'l', 'e'};
    cout << "Character Array" << arr << endl;

    return 0;
}