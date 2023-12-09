#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << " memeory is free for node with data " << value << endl;
    }
};

Node *removeDuplicates(Node* &head){
    if (head == NULL || head->next == NULL)return head;

    Node *curr = head;
    while (curr != NULL){
        Node *temp = curr;
        while (temp != NULL && temp->next != NULL){
                if (curr->data == temp->next->data)
                {
                    Node *deleteNode = temp->next;
                    temp->next = temp->next->next;
                    delete deleteNode;
                }
                else
                {
                    temp = temp->next;
                }
            }
            curr = curr->next;
    }
    return head;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtTail(Node *&tail, int d)
{
    // new node create
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

int main()
{
    // 4 2 5 4 2 2
    Node *node1 = new Node(4);
    Node *head = node1;
    Node *tail = node1;
    insertAtTail(tail, 2);
    insertAtTail(tail, 5);
    insertAtTail(tail, 4);
    insertAtTail(tail, 2);
    insertAtTail(tail, 2);
    print(head);
    head = removeDuplicates(head);
    print(head);
    return 0;
}