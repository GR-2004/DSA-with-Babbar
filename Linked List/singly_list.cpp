#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value = this -> data;
        if (this->next!=NULL)
        {
            delete next;
            next = NULL;
        }
        cout<<" memeory is free for node with data "<<value<<endl;
    }

};

void insertAtHead(Node* &head,int d){
    //new node create
    Node* temp = new Node(d);
    temp->next = head;
    head =temp;
}

void insertAtTail(Node* &tail,int d){
    //new node create
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &tail,Node* &head,int d,int pos){
    if(pos == 1){
        insertAtHead(head,d);
        return;
    }
    Node* temp = head;
    Node* ptr = new Node(d);
    pos = pos-1;
    while(--pos){
        temp = temp->next;
    }
    //inserting at last position
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    ptr->next = temp->next;
    temp->next = ptr;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void deleteNode(int pos,Node* &head,Node* &tail){
    //deleting first or start node
    if(pos==1){
        Node* temp = head;
        head = head->next;
        //memeory free
        temp->next = NULL;
        delete temp;
    }
    else{
        //daleteing any middle node or next node
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < pos){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        if(curr->next==NULL){
            tail = prev;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main(){
    //created a new node
    Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    //head pointed to node1
    Node* head = node1;
    // insertAtHead(head,45);
    // insertAtHead(head,78);

    Node* tail = node1;
    insertAtTail(tail,10);
    insertAtTail(tail,20);
    print(head);
    insertAtTail(tail,30);
    print(head);
    // insertAtPosition(head,55,3);
    // insertAtPosition(head,55,1);
    insertAtPosition(tail,head,896,5);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    // deleteNode(1,head,tail);
    deleteNode(5,head,tail);
    print(head);
    deleteNode(3,head,tail);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    return 0;
}