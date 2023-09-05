// Insertion of Node - At Position

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

// Insertion at position
void insertAtPos(Node *&head, Node *&tail, int pos, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL) // If list is empty
    {
        head = newNode;
        tail = newNode;
        return;
    }

    int count = 0; // Count the number of nodes
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    if (pos == 1) // Position is first
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    else if (pos == count + 1) // Position is last
    {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }

    else // Position is in-between
    {
        Node *temp1 = NULL;
        Node *temp2 = head;
        count = 1;
        while (count < pos)
        {
            temp1 = temp2;
            temp2 = temp2->next;
            count++;
        }

        newNode->next = temp2;
        newNode->prev = temp1;
        temp1->next = newNode;
        temp2->prev = newNode;
    }
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

    cout << "Enter Position, Value below: " << endl;
    for (int i = 0; i < n; i++)
    {
        int pos, val;
        cout << "Position: ";
        cin >> pos;
        cout << "Value: ";
        cin >> val;
        insertAtPos(head, tail, pos, val);
        print(head);
        cout << endl;
    }

    cout << "\nHead: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;
    return 0;
}