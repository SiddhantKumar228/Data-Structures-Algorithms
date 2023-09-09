// Covert Upper to Lower & Vice Versa

#include <iostream>
using namespace std;

int main()
{
    string str1;
    cout << "Enter the string in lower case: ";
    cin >> str1;

    // Convert to uppercase
    for (auto &ch1 : str1)
    {
        ch1 = toupper(ch1);
    }
    cout << "Conversion to upper case: " << str1 << endl;

    cout << "Enter the string in upper case: ";
    cin >> str1;

    // Convert to lower case
    for (auto &ch2 : str1)
    {
        ch2 = tolower(ch2);
    }
    cout << "Conversion to lower case: " << str1 << endl;

    return 0;
}