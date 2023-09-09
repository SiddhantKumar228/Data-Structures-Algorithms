// Write a program to check is a word is present in a string

#include <iostream>
using namespace std;

bool isPresent(string str, string word)
{
    int word_size = word.size();
    str = str + " ";
    int l = 0;
    int count = 0;
    for (int i = 0; i < str.size(); i++)
    {
        count++;
        if (str[i] == ' ')
        {
            count = count - 1;

            // Check size of word and substring
            if (word_size == count)
            {
                l = i - count; // Start position of substring

                if (word == str.substr(l, count)) // Check if subtring and word are same
                {
                    return true;
                }
            }
            count = 0;
        }
    }
    return false;
}

// Main function
int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    string word;
    cout << "Enter the word: ";
    cin >> word;

    if (isPresent(str, word))
    {
        cout << "Word is present " << endl;
    }
    else
    {
        cout << "Word is not present" << endl;
    }
    return 0;
}