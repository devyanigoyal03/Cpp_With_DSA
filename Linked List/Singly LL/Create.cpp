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

int main()
{
    // create new node
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *node2 = new Node(20);
    node1->next = node2;
    Node *node3 = new Node(30);
    node2->next = node3;
    Node *tail = node3;
    cout << node1->data << " " << node1->next << endl;
    cout << node2->data << " " << node2->next << endl;
    cout << node3->data << " " << node3->next;
}