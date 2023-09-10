// Encapsulation - (Variables + Functions) in class

#include <iostream>
using namespace std;

class Fruit // Class
{
private:
    // variables
    string color = " ";
    int price = 0;

public:
    // functions
    string getColor()
    {
        return color;
    }

    void setColor(string color)
    {
        this->color = color;
    }

    int getPrice()
    {
        return price;
    }

    void setPrice(int price)
    {
        this->price = price;
    }
};

int main()
{
    Fruit apple; // Object
    apple.setColor("Red");
    cout << "Color: " << apple.getColor() << endl;

    apple.setPrice(60);
    cout << "Price: " << apple.getPrice() << endl;
    return 0;
}