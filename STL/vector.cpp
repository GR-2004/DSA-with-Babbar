#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    vector<int> a(5,1);
    for (int i : a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> last(a);
    for (int i : last)
    {
        cout<<i<<" ";
    }


    v.push_back(45);
    v.push_back(4);
    v.push_back(4);
    v.push_back(4);
    v.push_back(4);
    v.push_back(4);
    cout<<"size: "<<v.size()<<endl;
    cout<<"size: "<<v.capacity()<<endl;
    cout<<"Element at 2nd Index: "<<v.at(2)<<endl;
     cout<<"First Element: "<<v.front()<<endl;
    cout<<"Last Element: "<<v.back()<<endl;
    int size = v.size();
    for (int i : v)
    {
        cout<<i<<" ";
    }
    cout<<"after the popped: "<<endl;
    v.pop_back();
    // int size = v.size();
    for (int i:v)
    {
        cout<<v[i]<<" ";
    }
    cout<<"size: "<<v.size()<<endl;
    v.clear();
    cout<<"size: "<<v.size()<<endl;
    return 0;
}