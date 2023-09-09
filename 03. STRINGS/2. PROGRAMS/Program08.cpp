// WAP to find number of vowels, consonents, digits, white spaces, special characters

#include <iostream>
#include <string>
using namespace std;

// Count function
void count(string str)
{
    int white_space = 0, vowel = 0, digit = 0, consonent = 0, special_char = 0;
    for (int i = 0; i < str.size(); i++)
    {
        // Whitespace count
        if (str[i] == ' ')
        {
            white_space++;
        }

        // If digits
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }

        // If alphabets
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            // Vowels
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
                vowel++;
            }

            else
            {
                consonent++;
            }
        }

        // Special Characters
        else
        {
            special_char++;
        }
    }

    cout << "Consonents: " << consonent << endl;
    cout << "Vowels: " << vowel << endl;
    cout << "Special Characters: " << special_char << endl;
    cout << "Digits: " << digit << endl;
    cout << "White Spaces: " << white_space << endl;
}

// Main function
int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    count(str);
    return 0;
}