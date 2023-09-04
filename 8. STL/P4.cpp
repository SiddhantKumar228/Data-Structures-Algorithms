#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v)
{
    cout << "Size: " << v.size() << endl;
    for (int a = 0; a < v.size(); a++)
    {
        cout << v[a] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v[n];
    for (int i = 0; i < n; i++)
    {
        int n1;
        cin >> n1;
        for (int j = 0; j < n1; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    for (int i = 0; i < n; i++)
    {
        printVec(v[i]);
    }
    return 0;
}