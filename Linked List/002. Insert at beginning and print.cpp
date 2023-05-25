// Insert at beggining and print
// Before insert: node1
// After insert: node2->node1
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

void insertAtBeginning(Node *&head, int data)
{
    Node *node2 = new Node(data);
    node2->next = head;
    head = node2;
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
    Node *node2 = new Node(20);
    insertAtBeginning(head, 20);
    printLinkedList(head);
}




