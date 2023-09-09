// Classes & Objects

#include <iostream>
using namespace std;

class Fruit // Class
{
public:
    // properties
    string color = " ";
    int price = 0;
};

int main()
{
    Fruit apple; // Object
    apple.color = "Red";
    apple.price = 60;
    cout << "Color of Apple: " << apple.color << " and Price: " << apple.price << endl;

    return 0;
}