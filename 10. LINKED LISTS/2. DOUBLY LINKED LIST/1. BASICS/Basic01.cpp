// Creation of Node

#include <iostream>
using namespace std;

class Node
{
public:
    // Three fields are created
    int data;   // Data Field
    Node *next; // Next Address Field
    Node *prev; // Previous Address Field

    // Contructor
    Node(int val) // Val is the value inside Data Field
    {
        this->data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int main()
{
    Node *newNode = new Node(10); // New Node with value 10
    cout << "Value of Current Node: " << newNode->data << endl;
    cout << "Address of Next Node: " << newNode->next << endl;
    cout << "Address of Previous Node: " << newNode->prev << endl;
    return 0;
}