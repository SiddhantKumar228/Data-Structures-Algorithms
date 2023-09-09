// Biggest word from string

#include <iostream>
#include <string>
using namespace std;

void big(string str)
{
    str = str + " ";
    int max_len = INT_MIN;
    int count = 0;
    int l = 0;
    for (int i = 0; i < str.size(); i++)
    {
        count++;
        if (str[i] == ' ')
        {
            count = count - 1;
            if (max_len < count)
            {
                max_len = count; // Storing the max length
                l = i - count;   // Start Position
            }
            count = 0;
        }
    }
    cout << "Biggest word: " << str.substr(l, max_len) << endl;
    cout << "Length: " << max_len << endl;
}

int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    big(str);
    return 0;
}