#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    cout<<binary_search(v.begin(),v.end(),6)<<endl;
    cout<<"Lower Bound-->"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"Lower Bound-->"<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    int a= 7;
    int b=5;
    cout<<"Max-->"<<max(a,b)<<endl;
    cout<<"Min-->"<<min(a,b)<<endl;
    swap(a,b);
    cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
    string ab = "abcd";
    reverse(ab.begin(),ab.end());
    cout<<"String is : "<<ab<<endl;
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate "<<endl;
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());      //based on inrosort -->insertion + quick + heap
    for(auto i : v){
        cout<<i<<" ";
    }

    return 0;
}