#include <iostream>
using namespace std;

int main()
{
    pair<int, int> p[3];
    p[0] = {1, 2};
    p[1] = {4, 5};
    p[2] = {7, 8};
    for (int i = 0; i < 3; i++)
    {
        cout << p[i].first << " " << p[i].second << endl;
    }

    // swap(p[0], p[2]);
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << p[i].first << " " << p[i].second << endl;
    // }

    p[0].first = 9;
    for (int i = 0; i < 3; i++)
    {
        cout << p[i].first << " " << p[i].second << endl;
    }
    return 0;
}