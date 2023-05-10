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

// Reverse Traversal
void reversePrint(Node *&tail)
{
    if (tail == NULL)
    {
        cout << "List is Empty";
        return;
    }
    Node *ptr = tail;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->prev;
    }
    cout << endl;
}

int main()
{
    // create new node
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *node2 = new Node(20);
    node1->next = node2;
    node2->prev = node1;
    Node *node3 = new Node(30);
    node2->next = node3;
    node3->prev = node2;
    Node *tail = node3;
    cout << node1->data << " " << node1->next << endl;
    cout << node2->data << " " << node2->next << endl;
    cout << node3->data << " " << node3->next<<endl;
    print(head);
    reversePrint(tail);
}