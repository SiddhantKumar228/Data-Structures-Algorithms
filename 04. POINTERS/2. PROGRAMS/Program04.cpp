// Greates & Smallest among three using pointers

#include <iostream>
using namespace std;

int greatest(int *a, int *b, int *c)
{
    int max = 0;
    if ((*a >= *b) && (*a >= *c))
    {
        max = *a;
        return max;
    }
    else if ((*b >= *c) && (*b >= *a))
    {
        max = *b;
        return max;
    }
    else
    {
        max = *c;
        return max;
    }
}

int main()
{
    int a, b, c;
    cout << "Enter the three numbers: ";
    cin >> a >> b >> c;

    cout << "Greatest: " << greatest(&a, &b, &c);
    return 0;
}