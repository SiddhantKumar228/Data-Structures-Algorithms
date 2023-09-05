// Deletion of Node - From Beginning

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
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
    Node *head = NULL;
    Node *tail = NULL;

    cout << "Given Linked List: " << endl;
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
    

    cout << "\nHead: " << head->data << endl;
    cout << "\nTail: " << tail->data << endl;
    return 0;
}