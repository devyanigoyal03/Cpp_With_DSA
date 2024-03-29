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

void InsertBeg(Node *&head, Node *&tail, int data)
{
    // create node and then add it in beginning
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
    tail->next = head;
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
    do
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    } while (ptr != head);
    cout << endl;
}

int main()
{
    // create new node
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    InsertBeg(head, tail, 20);
    // print(head);
    InsertBeg(head, tail, 30);
    // print(head);
    InsertBeg(head, tail, 40);
    print(head);
}