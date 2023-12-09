#include<iostream>
using namespace std;

bool check_palindrome(string str,int i,int j){
    if (i>=j)
        return true;
    
    if(str[i]!=str[j])return false;

    else{
        return check_palindrome(str,++i,--j);
    }
}

int main(){
    string s = "acfebca";
    bool ans = check_palindrome(s,0,s.length()-1);
    if(ans){
        cout<<"string is palindrome "<<endl;
    }
    else{
        cout<<"not palindrome "<<endl;
    }
    return 0;
}