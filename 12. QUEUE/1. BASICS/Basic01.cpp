// Creating a Queue and performing basic operations

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q; // Queue of interger tpye is created
    cout << "Size of Queue: " << q.size() << endl
         << endl;

    // Push operation with front element
    q.push(3);
    cout << "Pushed 3" << endl;
    cout << "Element at front: " << q.front() << endl;
    cout << "Size of Queue: " << q.size() << endl
         << endl;

    q.push(7);
    cout << "Pushed 7" << endl;
    cout << "Element at front: " << q.front() << endl;
    cout << "Size of Queue: " << q.size() << endl
         << endl;

    q.push(4);
    cout << "Pushed 4" << endl;
    cout << "Element at front: " << q.front() << endl;
    cout << "Size of Queue: " << q.size() << endl
         << endl;

    q.push(9);
    cout << "Pushed 9" << endl;
    cout << "Element at front: " << q.front() << endl;
    cout << "Size of Queue: " << q.size() << endl
         << endl;

    // If queue is empty or not
    if (q.empty())
    {
        cout << "Queue is empty\n"
             << endl;
    }
    else
    {
        cout << "Queue is non empty\n"
             << endl;
    }

    // Pop operation with front element
    q.pop();
    cout << "Popped 3" << endl;
    cout << "Element at front: " << q.front() << endl;
    cout << "Size of Queue: " << q.size() << endl
         << endl;

    q.pop();
    cout << "Popped 7" << endl;
    cout << "Element at front: " << q.front() << endl;
    cout << "Size of Queue: " << q.size() << endl
         << endl;

    q.pop();
    cout << "Popped 4" << endl;
    cout << "Element at front: " << q.front() << endl;
    cout << "Size of Queue: " << q.size() << endl
         << endl;

    q.pop();
    cout << "Popped 9" << endl;
    cout << "Element at front: " << q.front() << endl;
    cout << "Size of Queue: " << q.size() << endl
         << endl;

    // If queue is empty or not
    if (q.empty())
    {
        cout << "Queue is empty\n"
             << endl;
    }
    else
    {
        cout << "Queue is non empty\n"
             << endl;
    }

    return 0;
}