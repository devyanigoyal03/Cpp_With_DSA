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
        do
        {
            count++;
            ptr=ptr->next;
        } while (ptr != head);
        return count;
    }
}

void InsertBeg(Node *&head, Node *&tail, int data)
{
    // create node and then add it in beginning
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
    tail->next = head;
}

void InsertEnd(Node *&head, Node *&tail, int data)
{
    // create node and then add it in end of node
    Node *temp = new Node(data);
    tail->next = temp;
    temp->next = head;
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
            InsertBeg(head, tail, data);
        }
        else if (len(head) == pos - 1)
        {
            InsertEnd(head, tail, data);
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
    Node *head = NULL;
    Node *tail = NULL;
    Node *node1 = new Node(20);
    head = node1;
    tail = node1;
    InsertBeg(head, tail, 10);
    InsertEnd(head, tail, 30);
    InsertEnd(head, tail, 40);
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
    cout << head->data << endl
         << tail->data << endl
         << tail->next->data << endl;

    cout << "Length Of LL: " << len(head);
}