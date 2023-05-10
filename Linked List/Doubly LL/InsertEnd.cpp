#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next, *prev;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void InsertEnd(Node *&head, Node *&tail, int data)
{
    // create node and then add it in end of node
    Node *temp = new Node(data);
    if (tail == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

// Traverse
void print(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is Empty";
        return;
    }
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main()
{
    // create new node
    Node *head = NULL, *tail = NULL;
    InsertEnd(head, tail, 1);
    // print(head);
    InsertEnd(head, tail, 10);
    // print(head);
    InsertEnd(head, tail, 20);
    // print(head);
    InsertEnd(head, tail, 30);
    // print(head);
    InsertEnd(head, tail, 40);
    print(head);
}