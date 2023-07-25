#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr, top, size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "\nStack Overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "\nStack Underflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "\nStack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    Stack s(5);
    s.push(1);
    s.push(2);
    s.pop();
    s.push(3);
    s.push(4);
    cout << s.peek();
    s.push(5);
    s.pop();
    if (s.isEmpty())
    {
        cout << "\nStack is empty" << endl;
    }
    else
    {
        cout << "\nStack is not empty" << endl;
    }
    return 0;
}