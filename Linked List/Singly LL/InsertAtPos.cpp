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

int len(Node *&head)
{
    Node *ptr = head;
    if (ptr == NULL)
    {
        cout << "Empty Linked List" << endl;
        return 0;
    }
    else
    {
        int count = 0;
        while (ptr != NULL)
        {
            count++;
            ptr = ptr->next;
        }
        return count;
    }
}

void InsertBeg(Node *&head, int data)
{
    // create node and then add it in beginning
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void InsertEnd(Node *&tail, int data)
{
    // create node and then add it in end of node
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void InsertAtPos(Node *&head, Node *&tail, int pos, int data)
{
    if (pos <= 0)
    {
        return;
    }
    else
    {
        if (pos == 1)
        {
            InsertBeg(head, data);
        }
        else if (len(head) == pos - 1)
        {
            InsertEnd(tail, data);
        }
        else
        {
            Node *temp = head;
            int cnt = 1;
            while (cnt < pos - 1)
            {
                temp = temp->next;
                cnt++;
            }
            Node *newNode = new Node(data);
            newNode->next = temp->next;
            temp->next = newNode;
        }
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
    Node *head = NULL;
    Node *tail = NULL;
    Node *node1 = new Node(10);
    head = node1;
    tail = node1;
    InsertEnd(tail, 20);
    InsertEnd(tail, 30);
    InsertEnd(tail, 40);
    print(head);

    //  InsertBeg
    InsertAtPos(head, tail, 1, 1);
    print(head);
    // InsertPos
    InsertAtPos(head, tail, 3, 2);
    print(head);
    // InsertEnd
    int n = len(head);
    InsertAtPos(head, tail, n + 1, 3);
    print(head);

    cout << "Length Of LL: " << len(head);
}