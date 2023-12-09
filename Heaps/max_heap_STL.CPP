#include<iostream>
#include<queue>
using namespace std;

int main(){

    priority_queue<int> pq;            //maxheap

    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout<<"element on top "<<pq.top()<<endl;
    pq.pop();
    cout<<"element on top "<<pq.top()<<endl;
    cout<<"Size is : "<<pq.size()<<endl;
    if(pq.empty()){
        cout<<"pq is empty "<<endl;
    }
    else{
        cout<<"pq is not empty"<<endl;
    }
    return 0;
}