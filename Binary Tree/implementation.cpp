// #include<iostream>
// #include<queue>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root){
    cout<<"enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout<<"enter the data for inserting in left"<<endl;
    root->left = buildTree(root->left);
    cout<<"enter the data for inserting in right"<<endl;
    root->right = buildTree(root->right);
    return root;  
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if (temp == NULL) // purana level complete traverse ho gya hai
        {
            cout<<endl;
            if(!q.empty()){ // if queue still some child nodes
                q.push(NULL);
            } 
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void reverseLevelOrderTraversal(node* root){
    stack<node *> s;
    s.push(root);
    s.push(NULL);
    while (!s.empty())
    {
        node* temp = s.top();
        s.pop();
        if (temp == NULL) // purana level complete traverse ho gya hai
        {
            cout<<endl;
            if(!s.empty()){ // if queue still some child nodes
                s.push(NULL);
            } 
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                s.push(temp->left);
            }
            if(temp->right){
                s.push(temp->right);
            }
        }
    }   
}

void inOrder(node* root){
    //base case
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void preOrder(node* root){
    //base case
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(node* root){
    //base case
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

node* buildFromLevelOrder(node* &root){
    queue<node *>q;
    cout<<"Enter data for root "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node* temp = q.front();
        q.pop();
        cout<<"enter left node for "<<temp->data<<endl;
        int leftData;
        cin>>leftData;
        if(leftData!=-1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }
        cout<<"enter right node for "<<temp->data<<endl;
        int rightData;
        cin>>rightData;
        if(rightData!=-1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
    
}

int main(){
    node* root = NULL;

    buildFromLevelOrder(root);
    /*
    //creating a tree
    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //level order
    cout<<"printing the level order traversal output"<<endl;
    levelOrderTraversal(root);
    // reverseLevelOrderTraversal(root);

    cout<<"inorder traversal is: ";
    inOrder(root);
    cout<<endl;
    cout<<"preorder traversal is: ";
    preOrder(root);
    cout<<endl;
    cout<<"postorder traversal is: ";
    postOrder(root);
    */
    return 0;
}