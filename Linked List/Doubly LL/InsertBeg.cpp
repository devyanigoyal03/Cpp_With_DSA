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

void InsertBeg(Node *&head, int data)
{
    // create node and then add it in beginning
    Node *temp = new Node(data);
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
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

// Reverse Traversal
void reversePrint(Node *&tail)
{
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
    Node *head = NULL, *tail = NULL;
    InsertBeg(head, 1);
    tail = head;
    InsertBeg(head, 10);
    // print(head);
    InsertBeg(head, 20);
    // print(head);
    InsertBeg(head, 30);
    // print(head);
    InsertBeg(head, 40);
    print(head);
    reversePrint(tail);
}