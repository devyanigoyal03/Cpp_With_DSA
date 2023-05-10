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

void InsertBeg(Node *&head, int data)
{
    // create node and then add it in beginning
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
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
    InsertBeg(head, 20);
    // print(head);
    InsertBeg(head, 30);
    // print(head);
    InsertBeg(head, 40);
    print(head);
}