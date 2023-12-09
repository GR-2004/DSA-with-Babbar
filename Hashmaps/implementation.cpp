#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    //creation
    unordered_map<string,int> m;

    //insertion

    //1 way
    pair<string,int> p = make_pair("babbar",1);
    m.insert(p);

    //2 way
    pair<string,int> p2("love",2);
    m.insert(p2);

    //3 way
    m["mera"] = 1;
    m["mera"] = 2;
    
    //searching

    //1 way
    cout<<m["mera"]<<endl;

    //2 way
    cout<<m.at("babbar")<<endl;

    cout<<m["unknown_key"]<<endl;
    cout<<m.at("unknown_key")<<endl;

    //size
    cout<<"size : "<< m.size()<<endl;

    //to check precence
    cout<<m.count("bro")<<endl;

    //erase
    m.erase("love");
    cout<<m.size()<<endl;

    //display

    //1 way
    for (auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    //2 way
    unordered_map<string,int> :: iterator it = m.begin();
    while(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

    return 0;
}