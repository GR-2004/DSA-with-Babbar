#include<iostream>
using namespace std;
#define min(a,b) ((a) > (b)) ? cout<<a : cout<<b;
int main(){
    int x,y;
    cin>>x>>y;
    min(x,y);
    return 0;
}