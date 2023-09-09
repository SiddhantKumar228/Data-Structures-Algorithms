// Frequency of a character in string
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    char ch;
    cout << "Enter the character: ";
    cin >> ch;

    int count = 0;
    for (char c : str)
    {
        if (c == ch)
        {
            count++;
        }
    }

    cout << "Frequence: " << count;

    return 0;
}