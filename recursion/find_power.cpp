#include<iostream>
using namespace std;

int power(int a,int b){
    //base case
    if(b==0)return 1;
    if(b==1)return a;
    else{
        if(b%2==0)return power(a,b/2) * power(a,b/2);
        else{
            return a * power(a,b/2) * power(a,b/2);
        }
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    int ans = power(a,b);  
    cout<<"power: "<<ans;
    return 0;
}