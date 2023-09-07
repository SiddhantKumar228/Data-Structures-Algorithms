// Creating a Stack and performing basic operations

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s; // Stack of integer type is created
    cout << "Size of stack: " << s.size() << endl
         << endl;

    // Push Operation
    s.push(2);
    cout << "Pushed 2" << endl;
    cout << "Element at top: " << s.top() << endl;
    cout << "Size of stack: " << s.size() << endl
         << endl;

    s.push(5);
    cout << "Pushed 5" << endl;
    cout << "Element at top: " << s.top() << endl;
    cout << "Size of stack: " << s.size() << endl
         << endl;

    s.push(4);
    cout << "Pushed 4" << endl;
    cout << "Element at top: " << s.top() << endl;
    cout << "Size of stack: " << s.size() << endl
         << endl;

    s.push(9);
    cout << "Pushed 9" << endl;
    cout << "Element at top: " << s.top() << endl;
    cout << "Size of stack: " << s.size() << endl
         << endl;

    // Check if stack is empty
    if (s.empty())
    {
        cout << "Stack is empty\n"
             << endl;
    }
    else
    {
        cout << "Stack is not empty\n"
             << endl;
    }

    // Pop Operation
    s.pop();
    cout << "Popped 9" << endl;
    cout << "Element at top: " << s.top() << endl;
    cout << "Size of stack: " << s.size() << endl
         << endl;

    s.pop();
    cout << "Popped 4" << endl;
    cout << "Element at top: " << s.top() << endl;
    cout << "Size of stack: " << s.size() << endl
         << endl;

    s.pop();
    cout << "Popped 5" << endl;
    cout << "Element at top: " << s.top() << endl;
    cout << "Size of stack: " << s.size() << endl
         << endl;

    s.pop();
    cout << "Popped 2" << endl;
    cout << "Size of stack: " << s.size() << endl
         << endl;

    // Check if stack is empty
    if (s.empty())
    {
        cout << "Stack is empty\n"
             << endl;
    }
    else
    {
        cout << "Stack is not empty\n"
             << endl;
    }
    return 0;
}