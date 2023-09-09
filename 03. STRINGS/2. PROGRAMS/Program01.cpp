// Reverse a String

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;

    reverse(str.begin(), str.end());
    cout << "Reverse string: " << str << endl;
    return 0;
}