// Insertion in Circular Linked List
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

// Insertion
void insert(Node *&tail, int val)
{

    Node *newNode = new Node(val);

    if (tail == NULL) // If list is empty
    {
        tail = newNode;
        tail->next = tail;
    }

    newNode->next = tail->next; // List is non empty
    tail->next = newNode;
}

// Traversal
void print(Node *tail)
{
    cout << "\nCircular Linked List" << endl;
    Node *temp = tail->next;
    while (temp != tail)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << endl;
}

int main()
{
    Node *tail = NULL;

    int n;
    cout << "Enter the number of elements you want to insert: ";
    cin >> n;
    int x;
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        insert(tail, x);
    }
    print(tail);
    cout << "\nTail: " << tail->data << endl;
    cout << "Tail->Next: " << tail->next->data;
    return 0;
}