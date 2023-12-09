#include<iostream>
using namespace std;

void reverse(string &s,int i,int j){
    
    cout<<"call receive for "<<s<<endl;
    //base case
    if (i >= j)
    {
        return;
    }
    
    else{
        swap(s[i],s[j]);
        i++;
        j--;
        return reverse(s,i,j);
    }

}

int main(){
    string s = "abcde";
    // int n = sizeof(s)/sizeof(string);
    // cout<<sizeof(n);
    reverse(s,0,s.length()-1);
    int i=0;
    // while(s[i] !='\0'){
    //     cout<<s[i];
    //     i++;
    // }
    for (auto &&i : s)
    {
        cout<<i;
    }
    
    return 0;
}