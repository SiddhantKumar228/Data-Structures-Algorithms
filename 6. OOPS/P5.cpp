#include <iostream>
using namespace std;

class Add
{
public:
    void A(int x, int y)
    {
        cout << x + y << endl;
    }

    void A(int x, int y, int z)
    {
        cout << x + y + z << endl;
    }

    void A(int x, int y, int z, int w)
    {
        cout << x + y + z + w << endl;
    }
};

int main()
{
    Add ob1;
    ob1.A(4, 6);
    ob1.A(2, 5, 7);
    ob1.A(6, 9, 12, 3);
    return 0;
}