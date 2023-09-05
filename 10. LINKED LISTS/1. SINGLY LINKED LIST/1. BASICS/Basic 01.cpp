// Creation of Node

#include <iostream>
using namespace std;

class Node
{
public:
    // Two fields are created
    int data;   // Data Field
    Node *next; // Address Field

    // Contructor
    Node(int val) // Val is the value inside Data Field
    {
        this->data = val;
        this->next = NULL;
    }
};

int main()
{
    Node *newNode = new Node(10); // New Node with value 10
    cout << "Value of Current Node: " << newNode->data << endl;
    cout << "Address of Next Node: " << newNode->next << endl;
    return 0;
}