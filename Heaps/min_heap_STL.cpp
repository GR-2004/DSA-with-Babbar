#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int,vector<int>,greater<int>> minHeap;       // min heap
    minHeap.push(4);
    minHeap.push(2);
    minHeap.push(3);
    minHeap.push(7);

    cout<<"element on top "<<minHeap.top()<<endl;
    minHeap.pop();
    cout<<"element on top "<<minHeap.top()<<endl;
    cout<<"Size is : "<<minHeap.size()<<endl;
    if(minHeap.empty()){
        cout<<"minHeap is empty "<<endl;
    }
    else{
        cout<<"minHeap is not empty"<<endl;
    }
    
    return 0;
}