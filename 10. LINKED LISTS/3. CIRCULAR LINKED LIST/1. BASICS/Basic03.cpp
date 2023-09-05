// Insertion in Circular Linked List (Before a given data)
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
        return;
    }
    newNode->next = tail->next; // List is non empty
    tail->next = newNode;
}

// Insert Before Data
void insertBefore(Node *tail, int x, int n)
{
    Node *newNode = new Node(n);

    if (tail == NULL) // If list is empty
    {
        cout << "List is Empty";
        return;
    }

    Node *temp = tail->next; // If list is non-empty
    while (temp->next->data != x)
    {
        if (temp == tail)
        {
            break;
        }
        temp = temp->next;
    }
    if (temp->next->data == x) // If data is present
    {
        newNode->next = temp->next;
        temp->next = newNode;
    }
    else // If data is not present
    {
        cout << "Element is not present" << endl;
    }
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
    insert(tail, 96);
    insert(tail, 56);
    insert(tail, 33);
    insert(tail, 21);
    insert(tail, 18);
    print(tail);
    cout << "\nTail: " << tail->data << endl
         << endl;

    int n;
    cout << "Enter the value of new node: ";
    cin >> n;

    int x;
    cout << "Enter the data before which you want to insert new node: ";
    cin >> x;

    insertBefore(tail, x, n);
    print(tail);
    return 0;
}