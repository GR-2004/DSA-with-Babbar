#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(45);
    d.push_back(78);
    d.push_front(41);
    d.push_front(4);
    for(int i:d){
        cout<<i<<" ";
    }
    // d.pop_front();
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    cout<<"Element at 2nd Index: "<<d.at(1)<<endl;
    
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase size: "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    return 0;
}