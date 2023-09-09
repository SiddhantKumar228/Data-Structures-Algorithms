// First & Last occurence of a character

#include <iostream>
using namespace std;

// finding occurence
void occurence(string str, char ch)
{
    int first = INT_MAX;
    int last = INT_MIN;
    int flag = 1;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ch)
        {
            first = min(i, first);
            last = max(i, last);
            flag = 0;
        }
    }
    if (flag == 1)
    {
        cout << "Character is not present " << endl;
    }

    else
    {
        cout << "First Occurence: " << first + 1 << endl;
        cout << "Last Occurence: " << last + 1 << endl;
    }
}

// Main function
int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    char ch;
    cout << "Enter the character: ";
    cin >> ch;

    occurence(str, ch);
    return 0;
}