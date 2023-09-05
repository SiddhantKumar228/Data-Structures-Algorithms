// Insertion of Node - At Beginning

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    // Constructor
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Insertion At Beginning
void insertAtBeginning(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val); // Creating a newNode

    if (head == NULL) // If the list is empty
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head; // If the list is not empty
    head->prev = newNode;
    head = newNode;
}

// Traversing of Linked List
void print(Node *head)
{
    Node *temp = head;
    cout << "\nLinked List: " << endl;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL; // Head pointer pointing to first node
    Node *tail = NULL; // Tail pointer pointing to last node

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the values: " << endl;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        insertAtBeginning(head, tail, x);
    }

    print(head);

    cout << "\nHead: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;
    return 0;
}