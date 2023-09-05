#include <iostream>
using namespace std;

class Fruit
{
    int x;

public:
    void set(int x)
    {
        this->x = x;
    }
    int get()
    {
        return (this->x);
    }
};

int main()
{
    Fruit apple;
    apple.set(3);
    cout << apple.get() << endl;
    return 0;
}