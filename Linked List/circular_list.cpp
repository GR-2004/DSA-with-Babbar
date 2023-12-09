#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
    //destructor
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<" memeory is free for node with data "<<value<<endl;
    }
};

void insertnode(Node* &tail,int element,int d){
    
}

int main(){
    
    return 0;
}