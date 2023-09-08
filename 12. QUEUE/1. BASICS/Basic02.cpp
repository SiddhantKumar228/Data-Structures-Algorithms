// Queue implementation using Arrays

#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int front;
    int size;
    int rear;

    // Constructor
    Queue(int size)
    {
        this->size = size;
        arr = new int(size);
        front = 0;
        rear = -1;
    }

    // Operations
    void push(int value)
    {
        // if space is available
        if (size - rear > 1)
        {
            rear++;
            arr[rear] = value;
        }

        // if space is not available
        else
        {
            cout << "Queue Overflow " << endl;
        }
    }

    void pop()
    {
        // if element is present
        if (rear >= 0)
        {
            rear--;
        }

        // if element is not present
        else
        {
            cout << "Queue Underflow" << endl;
        }
    }

    int first()
    {
        // if element is present
        if (rear >= 0)
        {
            return arr[front];
        }

        // if element is not present
        else
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
    }

    int last()
    {
        // if element is present
        if (rear >= 0)
        {
            return arr[rear];
        }

        // if element is not present
        else
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
    }

    bool empty()
    {
        if (rear == -1)
        {
            return true;
        }

        else
        {
            return false;
        }
    }
};

int main()
{
    Queue q(5);

    // Push Operation with front and rear element
    cout << "PUSH OPERATIONS\n"
         << endl;
    q.push(2);
    cout << "Pushed 2" << endl;
    cout << "Front: " << q.first() << endl;
    cout << "Rear: " << q.last() << endl
         << endl;

    q.push(8);
    cout << "Pushed 8" << endl;
    cout << "Front: " << q.first() << endl;
    cout << "Rear: " << q.last() << endl
         << endl;

    q.push(12);
    cout << "Pushed 12" << endl;
    cout << "Front: " << q.first() << endl;
    cout << "Rear: " << q.last() << endl
         << endl;

    q.push(16);
    cout << "Pushed 16" << endl;
    cout << "Front: " << q.first() << endl;
    cout << "Rear: " << q.last() << endl
         << endl;

    q.push(19);
    cout << "Pushed 19" << endl;
    cout << "Front: " << q.first() << endl;
    cout << "Rear: " << q.last() << endl
         << endl;

    q.push(21);

    // if Queue is empty or not
    if (q.empty())
    {
        cout << "Queue is Empty\n"
             << endl;
    }

    else
    {
        cout << "Queue is Non Empty\n"
             << endl;
    }

    // Pop Operation with front and rear element
    cout << "POP OPERATIONS\n"
         << endl;

    q.pop();
    cout << "Popped 2" << endl;
    cout << "Front: " << q.first() << endl;
    cout << "Rear: " << q.last() << endl
         << endl;

    q.pop();
    cout << "Popped 8" << endl;
    cout << "Front: " << q.first() << endl;
    cout << "Rear: " << q.last() << endl
         << endl;

    q.pop();
    cout << "Popped 12" << endl;
    cout << "Front: " << q.first() << endl;
    cout << "Rear: " << q.last() << endl
         << endl;

    q.pop();
    cout << "Popped 16" << endl;
    cout << "Front: " << q.first() << endl;
    cout << "Rear: " << q.last() << endl
         << endl;

    q.pop();
    cout << "Popped 19" << endl;
    cout << "Front: " << q.first() << endl;
    cout << "Rear: " << q.last() << endl
         << endl;

    q.pop();

    // if Queue is empty or not
    if (q.empty())
    {
        cout << "Queue is Empty\n"
             << endl;
    }

    else
    {
        cout << "Queue is Non Empty\n"
             << endl;
    }
    return 0;
}