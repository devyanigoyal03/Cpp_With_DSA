#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertEnd(Node *&tail, int data)
{
    // create node and then add it in end of node
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
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
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    InsertEnd(tail, 20);
    // print(head);
    InsertEnd(tail, 30);
    // print(head);
    InsertEnd(tail, 40);
    print(head);
}