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

    // Destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << value << " Deleted" << endl;
    }
};

void deleteBeg(Node *&head)
{
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
}

void deleteNode(int pos, Node *&head)
{
    if (pos == 1)
    {
        deleteBeg(head);
    }
    else
    {
        Node *temp = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < pos)
        {
            prev = temp;
            temp = temp->next;
            cnt++;
        }

        prev->next = temp->next;
        temp->next = NULL;
        delete temp;
    }
}

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
    Node *node2 = new Node(20);
    node1->next = node2;
    Node *node3 = new Node(30);
    node2->next = node3;
    Node *node4 = new Node(40);
    node3->next = node4;
    Node *node5 = new Node(50);
    node4->next = node5;
    Node *tail = node5;
    print(head);
    // Delete from beginning
    deleteNode(1, head);
    print(head);
    // Delete at pos 2
    deleteNode(2, head);
    print(head);
    // Delete  end
    deleteNode(3, head);
    print(head);
}