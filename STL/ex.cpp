#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {45,12,45,78,1};
    v.insert(v.begin(),0);
    for (auto &&i : v)
    {
        cout<<i<<" ";
    }
    
    return 0;
}