// Deletion of Node - From Position

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtBeginning(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

// Delete from position
void delFromPos(Node *&head, Node *&tail, int pos)
{
    if (head == NULL) // If list is Empty
    {
        cout << "Underflow";
        return;
    }

    Node *temp = head; // Count the number of nodes
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    if (pos == 1) // Position is first
    {
        temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }

    else if (pos == count) // Position is last
    {
        temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
    }

    else // Position in-between
    {
        count = 1;
        Node *temp1 = NULL;
        Node *temp2 = head;
        while (count < pos)
        {
            temp1 = temp2;
            temp2 = temp2->next;
            count++;
        }
        temp1->next = temp2->next;
        temp2->next->prev = temp1;
        temp2->next = NULL;
        temp2->prev = NULL;
        delete temp2;
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
    cout << endl
         << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtBeginning(head, tail, 100);
    insertAtBeginning(head, tail, 92);
    insertAtBeginning(head, tail, 89);
    insertAtBeginning(head, tail, 75);
    insertAtBeginning(head, tail, 69);
    insertAtBeginning(head, tail, 56);
    insertAtBeginning(head, tail, 49);
    insertAtBeginning(head, tail, 33);
    insertAtBeginning(head, tail, 29);
    insertAtBeginning(head, tail, 12);
    print(head);

    cout << endl;

    int n;
    cout << "Enter the number of elements to be deleted: ";
    cin >> n;

    int pos;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the position: ";
        cin >> pos;
        delFromPos(head, tail, pos);
        print(head);
    }

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;
    return 0;
}