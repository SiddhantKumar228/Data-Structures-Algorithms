#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 4, 6, 8, 12};
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}