// Function Overloading

#include <iostream>
using namespace std;

class Add
{
public:
    // Function with same name
    void sum(int x, int y)
    {
        cout << "Sum: " << x + y << endl;
    }

    void sum(int x, int y, int z)
    {
        cout << "Sum: " << x + y + z << endl;
    }

    void sum(int x, int y, int z, int w)
    {
        cout << "Sum: " << x + y + z + w << endl;
    }
};

int main()
{
    Add ob;
    ob.sum(2, 3);
    ob.sum(2, 3, 4);
    ob.sum(2, 3, 4, 5);
    return 0;
}