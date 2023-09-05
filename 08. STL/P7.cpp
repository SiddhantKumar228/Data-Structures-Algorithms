#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> m;
    m[3] = "efgh";
    m[0] = "abcd";
    m[9] = "ijkl";
    m[5] = "mnop";
    m[7] = "qrst";

    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
    return 0;
}