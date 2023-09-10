// Constructor

#include <iostream>
using namespace std;

class Fruit // Class
{
public:
    // properties
    string color;
    int price;

    // Contructor
    Fruit(int price)
    {
        this->price = price;
    }

    string getColor() // Getter for color
    {
        return color;
    }

    void setColor(string color) // Setter for color
    {
        this->color = color;
    }
};

int main()
{
    Fruit *apple = new Fruit(40); // Arguments passed to contructor
    (*apple).setColor("Red");
    cout << "Color: " << (*apple).getColor() << endl;
    cout << "Price: " << apple->price << endl;
    delete apple;
    return 0;
}