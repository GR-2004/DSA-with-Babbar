#include<iostream>
#include<map>
using namespace std;

int main(){
    /*
    map is the data structure in which data strored in the form of 
    key is always unique  and point unique number
    same key dont point more than one value_compare
    complexity for searching,insertion is O(logn)
    */

    map<int,string> m;
    cout<<m.size()<<endl;
    m[13] = "Kumar";
    m[1] = "Babbar";
    m[2] = "Love";
    m.insert({55,"Bheem"});
    cout<<"Before erase "<<endl;
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"Finding 13 "<<m.count(13)<<endl;

    cout<<"After erase "<<endl;
    m.erase(13);                               
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it = m.find(1);
    for(auto i =it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
    return 0;
}