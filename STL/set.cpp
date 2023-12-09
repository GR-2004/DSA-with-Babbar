#include<iostream>
#include<set>
using namespace std;

int main(){
    //all element must be unique
    //implement using bst
    //modifiction not possible
    //element return sorted form
    //diff b/w set and unorderd_set is-->
    //set is slow
    //unorderd_set return random order

    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(0);
    s.insert(6);
    s.insert(8);     //insertion take O(logn)
    s.insert(18);     
    s.insert(28);     

    for(auto i :s){
        cout<<i<<" ";
    }
    cout<<endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for(auto i :s){
        cout<<i<<" ";
    }
    cout<<endl<<"Present or Not: "<<s.count(6)<<endl;

    set<int>:: iterator itr = s.find(8);    //return itrator 
    cout<<"value present at itr--> "<<*itr<<endl;

    for(auto i = itr;i!=s.end();i++){
        cout<<*i<<" ";
    }
    return 0;
}