// WAP to remove all consonents from a string

#include <iostream>
using namespace std;

// Remove consonents
void remove_consonents(string str)
{
    string str2 = "";
    for (int i = 0; i < str.size(); i++)
    {
        // Add Whitespace
        if (str[i] == ' ')
        {
            str2 = str2 + str[i];
        }

        // Add digits
        else if (str[i] >= '0' && str[i] <= '9')
        {
            str2 = str2 + str[i];
        }

        // If Alphabets
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            // add only Vowels
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
                str2 = str2 + str[i];
            }
        }

        // Add special characters
        else
        {
            str2 = str2 + str[i];
        }
    }
    cout << "String after removing consonents: " << str2;
}

// Main function
int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    remove_consonents(str);
    return 0;
}