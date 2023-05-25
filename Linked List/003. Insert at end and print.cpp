// Insert at end and then print
// Before insert :node1
// After insert: node1->node3
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAtEnd(Node *&tail, int data)
{
    Node *node3 = new Node(data);
    tail->next = node3;
    tail = node3;
}
void printLinkedList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " " << endl;
        temp = temp->next;
    }
}
int main()
{
    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;

    Node *node3 = new Node(30);

    insertAtEnd(tail, 30);
    printLinkedList(head);
}
