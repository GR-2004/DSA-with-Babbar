#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;
    s.push("love");
    s.push("babbar");
    s.push("Kumar");
    stack<string> s2;
    s2.push("love");
    s2.push("babbar");
    s2.push("Kumar");
    cout<<"Top element: "<<s.top()<<endl;
    s.pop();
    s2.pop();
    cout<<"Top element: "<<s.top()<<endl;
    cout<<"Size of stack: "<<s.size()<<endl;
    cout<<"Empty or Not: "<<s.empty()<<endl;
    if(s==s2)cout<<"yes";
    else{
        cout<<"no";
    }
    return 0;
}