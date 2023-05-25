// insert at middle
// Before insert: node1->node3
// After insert at 2nd pos: node1->nodeToInsert->node3

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
        this->next = nullptr;
    }
};

void insertAtEnd(Node *&tail, int data)
{
    Node *node3 = new Node(data);
    tail->next = node3;
    tail = node3;
}

void insertAtBeginning(Node *&head, int data)
{
    Node *node2 = new Node(data);
    node2->next = head;
    head = node2;
}

void printLinkedList(Node *&head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtMiddle(Node *&head, Node *tail, int pos, int data)
{
    if (pos == 1)                                   //handing insert at begg
    {
        insertAtBeginning(head, data);
        return;
    }

    Node *temp = head;  
    int cnt = 1;

    while (cnt < pos - 1)                           //traverse till the insertion position
    {
        temp = temp->next;
        cnt++;
    }

    Node *nodeToInsert = new Node(data);

    if (temp->next == nullptr)                      //handling insert at last 
    {
        insertAtEnd(tail, data);
    }
    else
    {
        nodeToInsert->next = temp->next;
        temp->next = nodeToInsert;
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    insertAtEnd(tail, 30);
    printLinkedList(head);

    insertAtMiddle(head, tail, 2, 20);
    printLinkedList(head);

    return 0;
}
