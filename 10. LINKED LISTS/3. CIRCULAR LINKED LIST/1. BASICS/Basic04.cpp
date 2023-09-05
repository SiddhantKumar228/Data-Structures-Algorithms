// Deletion in Circular Linked List
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

void insert(Node *&tail, int val)
{

    Node *newNode = new Node(val);

    if (tail == NULL)
    {
        tail = newNode;
        tail->next = tail;
    }

    newNode->next = tail->next;
    tail->next = newNode;
}

// Deletion
void deletion(Node *&tail)
{
    if (tail == NULL)
    {
        cout << "Underflow" << endl;
        return;
    }
    Node *temp = tail->next;
    tail->next = temp->next;
    temp->next = NULL;
    delete temp;
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

    insert(tail, 99);
    insert(tail, 83);
    insert(tail, 72);
    insert(tail, 67);
    insert(tail, 58);
    insert(tail, 42);
    insert(tail, 39);
    insert(tail, 21);
    insert(tail, 16);
    insert(tail, 7);

    print(tail);

    cout << "\nTail: " << tail->data << endl;
    cout << "Tail->Next: " << tail->next->data << endl;

    int n;
    cout << "\nEnter the number of elements to be deleted: ";
    cin >> n;

    int temp_tail = tail->data;
    for (int i = 0; i < n; i++)
    {
        deletion(tail);
    }

    if (temp_tail != tail->data)
    {
        cout << "List is Clear";
    }
    else
    {
        print(tail);

        cout << "\nTail: " << tail->data << endl;
        cout << "Tail->Next: " << tail->next->data << endl;
    }
    return 0;
}