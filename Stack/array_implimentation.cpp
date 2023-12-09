#include<iostream>
using namespace std;

class stack{
    //properties
    public:
    int *arr;
    int top;
    int size;
    //behavior
    stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        if(size-top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack is underflow"<<endl;
        }
    }
    int peek(){
        if(top>=0 && top<size){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    stack s(5);
    //insertion
    s.push(22);
    s.push(43);
    s.push(44);
    s.push(78);
    s.push(98);
    s.push(122);
    //deletion and peeked
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    //empty or not
    if(s.isEmpty()){
        cout<<"stack is empty mere dost"<<endl;
    }
    else{
        cout<<"stack is not empty mere dost"<<endl;
    }


    return 0;
}