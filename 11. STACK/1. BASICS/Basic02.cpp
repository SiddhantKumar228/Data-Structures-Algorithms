// Stack implementation using array

#include <iostream>
using namespace std;

class Stack
{
public:
    int top;
    int *arr;
    int size;

    // Constructor
    Stack(int size)
    {
        this->size = size;
        arr = new int(size);
        top = -1;
    }

    // Operations
    void push(int value)
    {
        // if space is available
        if (size - top > 1)
        {
            top++;
            arr[top] = value;
        }

        // if space is not available
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop()
    {
        // if any element is present
        if (top >= 0)
        {
            top--;
        }

        // if any element is not present
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }

    int peak()
    {
        // if stack is not empty
        if (top >= 0)
        {
            return arr[top];
        }

        // if stack is empty
        else
        {
            cout << "Stack is empty: " << endl;
            return -1;
        }
    }

    bool empty()
    {
        // if stack is empty
        if (top == -1)
        {
            return true;
        }

        // if stack is not empty
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack st(6); // Stack container is created of size 6

    // Push Operations with Peak elements
    cout << "PUSH OPERATIONS\n"
         << endl;
    st.push(3);
    cout << st.peak() << endl;
    st.push(8);
    cout << st.peak() << endl;
    st.push(2);
    cout << st.peak() << endl;
    st.push(12);
    cout << st.peak() << endl;
    st.push(17);
    cout << st.peak() << endl;
    st.push(24);
    cout << st.peak() << endl;

    // Overflow
    st.push(25);
    cout << endl;

    // Pop Operations with Peak elements
    cout << "POP OPERATIONS\n"
         << endl;
    st.pop();
    cout << st.peak() << endl;
    st.pop();
    cout << st.peak() << endl;
    st.pop();
    cout << st.peak() << endl;
    st.pop();
    cout << st.peak() << endl;
    st.pop();
    cout << st.peak() << endl;
    st.pop();
    cout << st.peak() << endl;

    // Underflow
    st.pop();
    cout << endl;

    // Check is stack is empty or not
    Stack st2(5);

    st2.push(4);
    if (st2.empty())
    {
        cout << "Stack is empty" << endl;
    }

    else
    {
        cout << "Stack is not empty" << endl;
    }

    st2.pop();
    if (st2.empty())
    {
        cout << "Stack is empty" << endl;
    }

    else
    {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}