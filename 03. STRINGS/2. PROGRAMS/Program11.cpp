// Reverse words of a sentence

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void reverse_words(string str)
{
    str = str + " ";
    string word = "";
    string rev_str = "";
    int count = 0;
    int start = 0;
    for (int i = 0; i < str.size(); i++)
    {
        count++;
        // Space found
        if (str[i] == ' ')
        {
            // Reverse each word
            start = i - (count - 1);
            word = str.substr(start, count - 1);
            reverse(word.begin(), word.end());

            // Add reversed words to string
            rev_str = rev_str + " " + word;
            word = "";
            count = 0;
        }
    }
    cout << "Sentence after reverse of each word: " << rev_str;
}

int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    reverse_words(str);
    return 0;
}