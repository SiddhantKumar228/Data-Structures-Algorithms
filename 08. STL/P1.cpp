#include <iostream>
using namespace std;

int main()
{
    pair<int, string> p;
    p = {2, "Abcd"};
    cout << p.first << " " << p.second << endl;

    pair<int, string> p1 = p;
    p1.first = 3;
    p1.second = "EDCD";
    cout << p.first << " " << p.second << endl;
    cout << p1.first << " " << p1.second << endl;

    pair<int, string> &p2 = p;
    p2.first = 5;
    p2.second = "jdhf";
    cout << p.first << " " << p.second << endl;
    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;
    return 0;
}