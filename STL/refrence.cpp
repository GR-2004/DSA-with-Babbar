#include<iostream>
using namespace std;

int update(int &j){
    j++;
    return j;
}

                                    //bad practice
// int& change(int a){
//     int num =a;
//     int &ans = num;
//     ans++;
//     return ans;
// }

int main(){
    int i=5;
    int &j = i;
    cout<<j<<endl;
    j++;
    cout<<i<<endl;
    int n = 50;
    cout<<update(n)<<endl;
    // cout<<change(i)<<" and "<<i<<endl;
    return 0;
}