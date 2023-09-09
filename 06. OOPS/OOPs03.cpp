// Dynamic Object

#include <iostream>
using namespace std;

class Fruit // Class
{
private:
    // properties
    string color = " ";
    int price = 0;

public:
    string getColor() // Getter for color
    {
        return color;
    }

    void setColor(string color) // Setter for color
    {
        this->color = color;
    }

    int getPrice() // Getter for price
    {
        return price;
    }

    void setPrice(int price) // Setter for price
    {
        this->price = price;
    }
};

int main()
{
    Fruit *apple = new Fruit; // Dynamic Object
    (*apple).setColor("Red");
    cout << "Color: " << (*apple).getColor() << endl;

    apple->setPrice(60);
    cout << "Price: " << apple->getPrice() << endl;
    return 0;
}