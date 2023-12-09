#include<iostream>
using namespace std;

int palindrome(int n){
    if(n==0)
    return 0;
    if(n==1)return 1;
    int ans = palindrome(n-1) + palindrome(n-2);
    return ans;
}

int main(){
    int n;
    cin>>n;
    int ans = palindrome(n);
    cout<<ans;
    return 0;
}