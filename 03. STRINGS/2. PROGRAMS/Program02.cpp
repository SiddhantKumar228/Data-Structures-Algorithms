// Part of String

#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;

    int pos, term;
    cout << "Enter the position & number of terms: ";
    cin >> pos >> term;

    cout << "Part of String: " << str.substr(pos, term);
    return 0;
}